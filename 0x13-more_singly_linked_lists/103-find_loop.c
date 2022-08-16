#include "lists.h"

/**
 * find_listint_loop - finds the starting node of a loop in a <listint_t> list
 *			if loop is detected
 * @head: head of the list
 *
 * Return: pointer to the starting node of the loop or (NULL) on error or if
 *	no loop is detected
 */
listint_t *find_listint_loop(listint_t *head)
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
