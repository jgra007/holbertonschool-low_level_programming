#include "holberton.h"

/**
 * create_file - create a new file
 * @filename: name of the file created
 * @text_content: Null
 *
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, cont;
	mode_t mode = O_CREAT | O_WRONLY | O_TRUNC;
	mode_t perm = S_IRUSR | S_IWUSR;
	ssize_t w;

	fd = open(filename, mode, perm);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (cont = 0; text_content[cont] != '\0'; cont++)
			;
		w = write(fd, text_content, cont);
		if (w == -1)
			return (-1);
	}
	close(fd);
	return (1);
}

