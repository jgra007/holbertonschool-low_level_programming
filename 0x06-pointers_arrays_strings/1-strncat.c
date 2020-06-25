#include "holberton.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: variable where the string will be stored
 * @src: variable that will store the second string
 * @n: variable that conatins the lenght of the bytes to be used
 * Return: dest 
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_a = 0;
	int src_a = 0;

	while (dest[dest_a] != '\0')
	{
		dest_a++;
	}

	while (src[src_a] != '\0' && src_a < n)
	{
		dest[dest_a] = src[src_a];
		src_a++;
		dest_a++;
	}

	dest[dest_a] = '\0';

	return (dest);
}
