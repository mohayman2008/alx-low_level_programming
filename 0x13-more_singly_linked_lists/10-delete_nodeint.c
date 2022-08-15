#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at given index of a <listint_t> list
 * @head: pointer to the head pointer of the list
 * @index: the index of the node to be deleted
 *
 * Return: (1) on success or (-1) in failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *next;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	current = *head;
	while (i + 1 < index)
	{
		i++;
		if (!(current->next) || !((current->next)->next))
			return (-1);
		current = current->next;
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
	}
	else
	{
		next = current->next;
		current->next = next->next;
		free(next);
	}

	return (1);
}
