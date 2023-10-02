#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Entry point
 * @filename: name of the file
 * @letters: number of letters
 * Return: number of chars printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd, wr, rd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = (char *)malloc(sizeof(char) * letters);
	rd = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (wr);
}
