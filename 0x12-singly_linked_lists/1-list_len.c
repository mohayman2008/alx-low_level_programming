#include "lists.h"

/**
 * list_len - find the number of elements of a <list_t> list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
