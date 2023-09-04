#include "main.h"
/**
 * create_file - Entry point
 * @filename: file name
 * @text_content: the content of the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int *fd, leng, wr = 0;
	
	if (!filename)
		return (-1);
	while (text_content)
	{
		leng++;
		text_content = text_content + leng;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 600);
	wr = write(fd, text_content, leng);
	if (fd == -1 || wr == -1)
		return (-1);
	close(fd);
	return (1);
}
