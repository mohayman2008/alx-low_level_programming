#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a <listint_t> list
 * @head: pointer to the head pointer of the list
 * @n: the integer member of the new node
 *
 * Return: pointer to the new node or NULL on error
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
