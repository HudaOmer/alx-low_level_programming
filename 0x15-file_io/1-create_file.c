#include "main.h"

/**
 * create_file - creates a file.
 * @filename: string
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, r;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (!text_content)
		text_content = "";
	for (length = 0; text_content[length]; length++)
		;

	r = write(fd, text_content, length);
	if (r < 0)
		return (-1);

	close(fd);

	return (1);
}
