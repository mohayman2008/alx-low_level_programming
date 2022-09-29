#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in dlistint_t list
 *				 at a given index
 * @head: address of the head of the list
 * @index: the index
 *
 * Return: the 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *prev = NULL, *current;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	current = *head;
	while (current->next && (i < index))
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (i != index)
		return (-1);

	if (current->next)
		current->next->prev = prev;

	if (index == 0)
		*head = current->next;
	else
		prev->next = current->next;

	free(current);
	return (1);
}
