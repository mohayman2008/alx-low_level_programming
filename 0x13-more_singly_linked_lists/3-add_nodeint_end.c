#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a <listint_t> list
 * @head: pointer to the head pointer of the list
 * @n: the integer member of the new node
 *
 * Return: pointer to the new node or NULL on error
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *l_itr, *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;

	else
	{
		l_itr = *head;
		while (l_itr->next)
			l_itr = l_itr->next;
		l_itr->next = new;
	}

	return (new);
}
