#include "holberton.h"

/**
 *void swap_int - swaps the values of two integers
 *@a: pointer used to swap a value
 *@b: pointer used to swap a value
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}	
