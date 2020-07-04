#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints arguments of a program
 * @argc: number of arguments
 * @argv: array of string of arguments
 *
 * Return: alays 0
 */
int main(int argc, char *argv[])
{
	
	if (argc < 2)
	{
	printf("Error\n");
	}
	else 
	{
	unsigned int n1 = atoi(argv[1]);
	unsigned int n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
		
	}
	return (0);
}
