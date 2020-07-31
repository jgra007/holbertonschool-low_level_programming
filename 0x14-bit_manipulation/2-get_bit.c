#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: bit
 * @index: given data
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int value;

	if (index > 64)
		return (-1);
		value = ((n >> index) & 1);

	return (value);
}
