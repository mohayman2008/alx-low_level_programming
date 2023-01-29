#include "search_algos.h"
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers
 *		(The list should be sorted in ascending order)
 * @list: Pointer to the head of the skip list to search in
 * @value: The value to search for
 *
 * Return: Pointer to the first node where the searched value is located
 *		or (NULL) if valued is not found or array is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *end;

	if (!list)
		return (NULL);

	prev = list;
	while (list && list->next && list->n < value)
	{
		prev = list;
		if (list->express)
		{
			list = list->express;
			printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		}
		else
			for (; list->next ; list = list->next)
				;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		prev->index, list->index);
	end = list ? list->next : list;
	list = prev;

	while (list != end && list->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
