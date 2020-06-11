#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Retunr: Always 0 (Success)
*/
int main (void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		print("%d is zero\n", n);
	}
	else 
	{
		printf("%d is negative\n", n);
	}
	return (0)
}
