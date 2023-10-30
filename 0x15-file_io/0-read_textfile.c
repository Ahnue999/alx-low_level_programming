#include "main.h"

/**
 * read_textfile - reads a text file and
 * print it to the standard output.
 *
 * @filename: the name of the file.
 * @letters: the number of letters to read
 * and print.
 * Return: the number of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t readcout, writecout;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, 0_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);

	readcount = read(fd, buffer, letters);
	writecount = write(STDOUT_FILENO, buffer, readcount);

	close(fd);
	free(buffer);

	return (readcount);
}
