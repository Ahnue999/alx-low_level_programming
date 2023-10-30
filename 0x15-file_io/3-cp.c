#include "main.h"

/**
 * errors - checks if file is open-able.
 * @file_from: the file_from.
 * @file_to: the file_to.
 * @argv: arguments vector.
 * Return: Nothing.
 */
void errors(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}


	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

}

/**
 * main - entry point.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t char_count, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	errors(file_from, file_to, argv);

	char_count = 1024;
	while (char_count == 1024)
	{
		char_count = read(file_from, buf, 1024);
		if (char_count == -1)
			errors(-1, 0, argv);
		nwr = write(file_to, buf, char_count);
		if (nwr == -1)
			errors(0, -1, argv);
	}

	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
