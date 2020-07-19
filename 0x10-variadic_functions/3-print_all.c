#include "variadic_functions.h"

/**
 * print_all - prints any kind of arguemnts being passed on
 * @format: list of arguement types
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";
	va_list pa;

	va_start(pa, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
			case 's':
			str = va_arg(pa, char*);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", separator, str);
			break;
			case 'c':
			printf("%s%c", separator, va_arg(pa, int));
			break;
			case 'i':
			printf("%s%i", separator, va_arg(pa, int));
			break;
			case 'f':
			printf("%s%f", separator, va_arg(pa, double));
			break;
			default:
			i++;
			continue;
			}
		separator = ", ";
		i++;
		}

	}
	va_end(pa);
	printf("\n");
}
