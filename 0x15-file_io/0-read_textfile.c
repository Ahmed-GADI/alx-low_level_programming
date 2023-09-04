#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Entry point
 * @filename: file name
 * @letters: number of letters to read
 * Return: num of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t wr;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	wr = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (wr);
}
