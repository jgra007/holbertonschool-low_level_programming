#include "lists.h"

/**
 * sum_listint - sum all data of a list
 * @head: head of a pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *t;

	t = head;

	while (t != NULL)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
