#include "lists.h"

/**
 * get_dnodeint_at_index - returns the node in dlistint_t list at a given index
 * @head: head of the list
 * @index: the index
 *
 * Return: the node if found or NULL if not or in case of error
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && (i < index))
		head = head->next, i++;

	return (head);
}
