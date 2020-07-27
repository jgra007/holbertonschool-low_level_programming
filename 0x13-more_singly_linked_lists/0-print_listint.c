#include <string.h>
#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint - prints all elements of a list
 * @h: pointer to head
 * Return: i; the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
