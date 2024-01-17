#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a singly linked list of integers
 *		using the Jump search algorithm
 *
 * @list: Pointer to the head of an ascendingly ordered singly linked list of
 *		integers to search in
 * @size: Number of nodes in <list>
 * @value: The value to search for
 *
 * Return: A pointer to the first node where <value> is located
 *		or NULL if <array> is NULL or <value> not found
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, end_idx = 0;
	listint_t *start = list, *end = list;

	if (!list || size < 1)
		return (NULL);

	step = sqrt(size);

	while (end_idx < size && end->n < value)
	{
		start = end;
		end_idx += step;
		for (; end->index < end_idx  && end->index < size - 1 ; end = end->next)
			;
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
	}

	end_idx = end->index;
	printf("Value found between indexes [%lu] and [%lu]\n",
		start->index, end_idx);

	while (start && start->index <= end_idx && start->index < size)
	{
		printf("Value checked at index [%lu] = [%d]\n", start->index, start->n);

		if (start->n > value)
			break;

		if (start->n == value)
			return (start);

		start = start->next;
	}

	return (NULL);
}
