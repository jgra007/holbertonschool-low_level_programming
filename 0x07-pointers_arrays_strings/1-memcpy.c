#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination memory area
 * @src: data to be copied
 * @n: times to be copied
 * Return: return pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

	dest[i] = src[i];
	i++;

	}

	return (dest);
}
