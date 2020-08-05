#include "holberton.h"

/**
 * read_textfile - read a text file and prints
 * it to the POSIX standard output.
 * @filename: asd
 * @letters: sadas
 * Return: asd
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buf = NULL;
	ssize_t len;
	ssize_t w;

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	len = read(fd, buf, letters);
	if (len == -1)
		return (0);

	w = write(STDOUT_FILENO, buf, len);
	if (w == -1)
		return (0);

	close(fd);

	return (w);
}
