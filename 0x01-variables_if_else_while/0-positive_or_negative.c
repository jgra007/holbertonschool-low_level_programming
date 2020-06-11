#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assign a random number to the variable 'n'.
 *
 * Return: 0 indicates sucesfull execution.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d%s\n", n, " is positive");
	}
	else if (n == 0)
	{
	printf("%d%s\n", n, " is zero");
	}
	else
	{
	printf("%d%s\n", n, " is negative");
	}
	return (0);
}
