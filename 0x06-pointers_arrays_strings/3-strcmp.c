#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: return the comparission of two stringsif
 */
int _strcmp(char *s1, char *s2)
{
	char *a1 = s1;
	char *a2 = s2;

	while (*a1 != '\0' && *a2 != '\0' && *a1 == *a2)
	{
		a1++;
		a2++;
	}
	return (*a1 - *a2);
}
