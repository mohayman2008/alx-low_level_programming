#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a singly linked skip list of integers
 *		using the Linear search algorithm
 *
 * @list: Pointer to the head of an ascendingly ordered singly linked skip
 *		list of integers to search in
 * @value: The value to search for
 *
 * Return: A pointer to the first node where <value> is located
 *		or NULL if <array> is NULL or <value> not found
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	/* size_t step, end_idx = 0; */
	skiplist_t *start = list, *end = list;

	if (!list)
		return (NULL);

	while (end->n < value && end->express)
	{
		start = end;
		end = end->express;
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);
	}

	if (end->n < value && end->next)
		start = end;
	while (end->n < value && end->next)
		end = end->next;

	printf("Value found between indexes [%lu] and [%lu]\n",
		start->index, end->index);

	while (start && start->index <= end->index)
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
