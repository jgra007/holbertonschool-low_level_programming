#include "variadic_functions.h"

/**
 * sum_them_all - sums all arguements
 * @n: number of arguements being inputted
 * Return: sum of all numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sta;

	unsigned int i = 0, sum = 0;

	if (n == 0)
		return (0);

	va_start(sta, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(sta, int);
	}
	va_end(sta);

	return (sum);
}
