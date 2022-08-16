#include "lists.h"

/**
 * find_loop - finds the starting node of a loop in a <listint_t> list
 *			if loop is detected
 * @head: head of the list
 *
 * Return: pointer to the starting node of the loop or (NULL) on error or if
 *	no loop is detected
 */
const listint_t *find_loop(const listint_t *head)
{
	const listint_t *itr1, *itr2;

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
 * print_listint_safe - prints all the elements of a <listint_t> list, detect
 *			loops and print the node where the loop starts
 * @head: head of the list
 *
 * Return: number of elements in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *itr, *loop;

	if (!head)
		exit(98);
	itr = head, loop = find_loop(head);
	/* loop will be NULL if no loop */
	while (itr != loop)
	{
		count++;
		printf("[%p] %d\n", (void *) itr, itr->n);
		itr = itr->next;
	}
	if (loop)
	{
		do {
			count++;
			printf("[%p] %d\n", (void *) itr, itr->n);
			itr = itr->next;
		} while (itr != loop);

		printf("-> [%p] %d\n", (void *) loop, loop->n);
	}

	return (count);
}
