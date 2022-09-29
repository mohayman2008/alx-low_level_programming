#include "lists.h"

/**
 * dlistint_len - number of nodes in a dlistint_t list
 * @h: head of the list
 *
 * Return: number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
