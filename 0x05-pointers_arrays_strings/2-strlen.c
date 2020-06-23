#include "holberton.h"

/**
 *_strlen - returns a string
 *@s: variable that contain the lenght of string
 *Return lenght of string
*/
int _strlen(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
