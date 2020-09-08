#include "holberton.h"

/**
 * *_strcat - funcion that concatenates two strings
 * @dest: variable that conaint a strinf to be concatenated
 * @src: variable that conaint a strinf to be concatenated
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_a = 0;
	int src_a = 0;

	while (dest[dest_a] != '\0')
	{
		dest_a++;
	}

	while (src[src_a] != '\0')
	{
		dest[dest_a] = src[src_a];
		src_a++;
		dest_a++;
	}

	dest[dest_a] = '\0';

	return (dest);
}
