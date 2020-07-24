#include "lists.h"

/**
 * list_len - returns number of elements in list
 * @h: pointer to struct
 * Return: number of elements in struct
 */

size_t list_len(const list_t *h)
{
	int elmt = 0;

	while (h != NULL)
	{
		elmt++;
		h = h->next;
	}
	return (elmt);
}
