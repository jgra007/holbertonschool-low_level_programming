#include "holberton.h"

/**
 * _isalphalower - check for a lowercase or uppercase
 * @c: the character to check
 * Return: 1 if c is a lowercase or uppercase , 0 otherswise
 */
int _isalphalower(int c)

{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_toupper - change lowercase to uppercase
 * @str: string to be changed to uppercase
 * Return: str
 */
char *string_toupper(char *str)
{
	int pos;

	for (pos = 0; str[pos] != '\0'; pos++)
	{
		if (_isalphalower(str[pos]))
		{
			str[pos] = str[pos] - 32;
		}
	}
	return (str);
}
