#include "holberton.h"

/**
 * set_bit - function to set a bit
 * @n: int pointer
 * @index: index at bit to change
 * Return: 1 if sucessful -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n |= (1 << index);
	return (1);
}
