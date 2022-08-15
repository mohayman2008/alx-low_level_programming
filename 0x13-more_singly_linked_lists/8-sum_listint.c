#include "lists.h"

/**
 * sum_listint - calculate the sum of all the elements of a <listint_t> list
 * @head: head of the list
 *
 * Return: sum of the elements in the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
