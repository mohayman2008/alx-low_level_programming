#include "lists.h"

/**
 * insert_nodeint_at_index - adds a node to a <listint_t> list, at given index
 * @head: pointer to the head pointer of the list
 * @idx: the index of the new node
 * @n: the integer member of the new node
 *
 * Return: pointer to the new node or NULL on error
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	current = *head;
	while (i + 1 < idx)
	{
		i++;
		if (!(current->next))
			return (NULL);
		current = current->next;
	}

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	if (!*head && idx == 0)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = current->next;
		current->next = new;
	}

	new->n = n;

	return (new);
}
