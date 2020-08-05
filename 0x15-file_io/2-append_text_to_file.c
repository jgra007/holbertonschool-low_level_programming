#include "holberton.h"

/**
 * append_text_to_file - append text
 * at the end of a file.
 * @filename: name of the file
 * @text_content: the NULL terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, cont;
	ssize_t w;

	fd = open(filename, O_APPEND | O_WRONLY);
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
