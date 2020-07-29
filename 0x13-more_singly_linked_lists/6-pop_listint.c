#include "lists.h"

/**
 * pop_listint - function to remove the head node of a list
 * @head: pointer to the pointer of the list
 * Return: the value stored in the head node or 0
 */
int pop_listint(listint_t **head)
{
	int i;

	listint_t *deleted_node;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	deleted_node = *head;
	next_node = (*head)->next;

	i = deleted_node->n;
	*head = next_node;
	free(deleted_node);

	return (i);
}
