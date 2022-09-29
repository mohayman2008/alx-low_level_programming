#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node in dlistint_t list
 *				 at a given index
 * @h: address of the head of the list
 * @idx: the index
 * @n: the integer element of the new node
 *
 * Return: the new node on success or NULL elsewise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = NULL, *prev = NULL, *current;
	unsigned int i = 0;

	if (!h)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	current = *h;
	while (current && (i < idx))
	{
		prev = current;
		current = current->next;
		i++;
	}

	new->n = n;
	new->prev = prev;

	if (idx == 0)
	{
		new->next = *h;
		*h = new;
	}
	else if (i == idx)
	{
		if (current)
			current->prev = new;
		prev->next = new;
		new->next = current;
	}
	else
		free(new), new = NULL;

	return (new);
}
