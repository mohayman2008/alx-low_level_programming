#include "lists.h"

/**
 * find_list_loop - finds the starting node of a loop in a <listint_t> list
 *			if loop is detected
 * @head: head of the list
 *
 * Return: pointer to the starting node of the loop or (NULL) on error or if
 *	no loop is detected
 */
listint_t *find_list_loop(listint_t *head)
{
	listint_t *itr1, *itr2;

	if (!head)
		return (NULL);

	itr1 = head, itr2 = head;
	do {
		itr1 = itr1->next;
		if (!itr1 || !itr2 || !itr2->next)
			return (NULL);
		itr2 = itr2->next->next;
		if (itr1 == itr2)
		{
			itr1 = head;
			while (itr1 != itr2)
				itr1 = itr1->next, itr2 = itr2->next;
			return (itr1);
		}
	} while (itr1 != itr2);

	return (NULL);
}

/**
 * free_listint_safe - free the dynamically allocated memory to a <listint_t>
 *			list, safe to use with list with loops
 * @h: pointer to the head of the list
 *
 * Return: number of freed nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next, *loop;

	if (!h || !*h)
		return (0);

	current = *h, loop = find_list_loop(*h);
	/* loop will be NULL if no loop */
	while (current != loop)
	{
		count++;
		next = current->next;
		free(current);
		current = next;
	}
	if (loop)
	{
		do {
			count++;
			next = current->next;
			free(current);
			current = next;
		} while (current != loop);
	}
	*h = NULL;

	return (count);
}
