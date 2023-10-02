#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: name of the file
 * @text_content: text to enter
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, leng = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (leng = 0; text_content[leng];)
			leng++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	wr = write(fd, text_content, leng);

	if (fd == -1 || wr == -1)
		return (-1);

	close(fd);

	return (1);
}
