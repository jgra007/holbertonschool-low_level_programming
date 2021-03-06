#include "holberton.h"

/**
 * factorial - returns factorial of a number
 * @n: variable that contain the number
 * Return: return the factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n = n * factorial(n - 1));
}
