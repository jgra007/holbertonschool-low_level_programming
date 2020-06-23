nclude "holberton.h"

/**
 * _puts - prints a strin followed by a new line
 * @str: variable that contain a string
 */
void _puts(char *str)
{
	int a;

	a = 0;
	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
