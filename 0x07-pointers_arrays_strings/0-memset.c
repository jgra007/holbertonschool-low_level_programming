#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to e filled
 * @b: char to be copied
 * @n: numbr of times to be copied
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{

	s[i] = b;
	i++;

	}

	return (s);
}
