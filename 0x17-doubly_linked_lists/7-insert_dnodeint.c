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

	current = *h;
	while (current && (i < idx))
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (i != idx)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = prev;
	new->next = current;
	if (current)
		current->prev = new;

	if (idx == 0)
		*h = new;
	else
		prev->next = new;

	return (new);
}
