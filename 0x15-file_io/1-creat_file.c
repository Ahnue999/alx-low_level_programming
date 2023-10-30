#include "main.h"

/**
 * create_file - creates a new file.
 * @filename: the name of the file.
 * @text_content: the file contents.
 *
 * Return: 1 if succeded and -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters_count;
	int write_count;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters_count = 0; text_content[letters_count]; letters_count++)
		;

	write_count = write(fd, text_content, letters_count);

	if (write_count == -1)
		return (-1);

	close(fd);

	return (1);
}
