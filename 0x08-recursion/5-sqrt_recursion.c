#include "holberton.h"

/**
 * _sqrt - find the natrual root of a number
 * @n: number to be square rooted
 * @i: iterator
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - finds the natural square root of number
 * @n: number to be sqaure rooted
 * Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 0));
}
