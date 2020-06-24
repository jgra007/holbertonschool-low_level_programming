#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: variable that contain a reserved string
 */
void rev_string(char *s)
{
	int a;
	int len;
	char c;

	len = 0;
	for (a = 0; s[a] != '\0'; a++)
		len++;

	for (a = 0; a < len; a++)
	{
		c = s[a];
		s[a] = s[len - 1];
		s[len - 1] = c;
		len--;
	}
}
