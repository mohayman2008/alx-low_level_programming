#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted integer list using the
 *		Jump search algorithm
 *		(The list should be sorted in ascending order)
 * @list: Pointer to the head of the list to search in
 * @size: The number of nodes in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where the searched value is located
 *		or (NULL) if valued is not found or array is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev, *current, *end;
	size_t jump;

	if (!list || size < 1)
		return (NULL);

	jump = sqrt(size);
	prev = current = list;
	while (current->next && current->index < size - 1 && current->n < value)
	{
		prev = current;

		while (current->next && current->index < size - 1)
		{
			current = current->next;
			if (current->index % jump == 0)
				break;
		}
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
	}

	end = current ? current->next : current;
	current = prev;
	printf("Value found between indexes [%lu] and [%lu]\n",
		current->index, end ? end->index - 1 : size - 1);

	while (current != end && current->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
