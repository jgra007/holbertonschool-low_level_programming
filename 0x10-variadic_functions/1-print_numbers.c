#include "variadic_functions.h"

/**
 * print_numbers - prints integers passes as arguents
 * @separator: string containing comman and space
 * @n: number of arguements being passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i = 0;

	va_start(pn, n);

	while (i < n)
	{
		if (i == 0)
		printf("%d", va_arg(pn, int));
		else
		printf("%s%d", separator, va_arg(pn, int));

		i++;
	}
	va_end(pn);
	printf("\n");
}
