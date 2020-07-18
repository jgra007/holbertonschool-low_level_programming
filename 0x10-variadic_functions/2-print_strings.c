#include "variadic_functions.h"

/**
 * print_strings - prints strings passed as arguements
 * @separator: string of comman and space printed after a number
 * @n: number of arguemnts passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i = 0;
	char *str;

	va_start(ps, n);

	while (i < n)
	{
		str = va_arg(ps, char*);
		if (str == NULL)
		str = "(nil)";

		if ((separator == 0) || (i == 0))
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	i++;
	}
	va_end(ps);

	printf("\n");
}
