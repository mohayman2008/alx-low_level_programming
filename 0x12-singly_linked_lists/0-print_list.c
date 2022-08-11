#include "lists.h"

/**
 * print_list - prints all the elements of a <list_t> list
 * @h: head of the list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	unsigned int len;
	char *str;

	if (!h)
		return (0);
	while (h)
	{
		n++;
		str = h->str;
		len = h->len;
		if (!str)
			str = "(nil)", len = 0;
		printf("[%u] %s\n", len, str);
		h = h->next;
	}
	return (n);
}
