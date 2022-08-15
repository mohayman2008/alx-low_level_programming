#include "lists.h"

/**
 * pop_listint - pops the first element of a <listint_t> list
 * @head: pointer to the head pointer of the list
 *
 * Return: the integer element of the deleted node
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int n;

	if (!head || !*head)
		return (0);

	current = *head;
	*head = current->next;
	n = current->n;
	free(current);

	return (n);
}
