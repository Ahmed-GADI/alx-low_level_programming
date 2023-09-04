#include "main.h"

/**
 * create_file - Entry point
 * @filename: file name
 * @text_content: content
 * Return: 1 succes, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
