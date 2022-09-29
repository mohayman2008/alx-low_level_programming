#include "lists.h"

/**
 * sum_dlistint - calculate the sum of all elements in a dlistint_t list
 * @head: head of the list
 *
 * Return: the sum result
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
