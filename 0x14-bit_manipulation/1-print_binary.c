#include "holberton.h"

/**
 * print_binary - conver decimal to binary
 * @n: decimal number
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) + '0');
}