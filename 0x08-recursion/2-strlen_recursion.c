#include "holberton.h"

/**
 * _strlen_recursion - returnthe length of a string
 * @s: variable that contains a string
 * Return: lentgh of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
		return (_strlen_recursion(s + 1) + 1);
	
}
