#include "main.h"

/**
 * append_text_to_file - append
 * @filename: string
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, length, r;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		for (length = 0; text_content[length]; length++)
			;
		r = write(fd, text_content, length);
		if (r < 0)
			return (-1);
	}

	close(fd);

	return (1);
}
