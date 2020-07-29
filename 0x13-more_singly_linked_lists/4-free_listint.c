#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head of list
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
