#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head of list
 * @n: int
 * Return: the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	end = malloc(sizeof(listint_t));
	if (end == NULL)
	{
		free(end);
		return (NULL);
	}
	end->n = n;
	end->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = end;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end;
	}
	return (end);
}
