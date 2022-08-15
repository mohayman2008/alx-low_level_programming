#include "lists.h"

/**
 * listint_len - find the number of elements of a <listint_t> list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (!h)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
