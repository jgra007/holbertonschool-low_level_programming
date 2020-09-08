#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: variable where string will be copied
 * @src: variable that will provide the string
 * @n: size limit of bytes that can be coppied
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cont;

	cont = 0;
	while (src[cont] != '\0' && cont < n)
	{
		dest[cont] = src[cont];
		cont++;
	}
	while (cont < n)
	{
		dest[cont] = '\0';
		cont++;
	}
	return (dest);
}
