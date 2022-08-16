#include "lists.h"

/**
 * reverse_listint - reverses the order of the elements of a <listint_t> list
 * @head: pointer to the head of the list
 *
 * Return: the firs node in the list or NULL on error
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *l_itr, *next;

	if (!head || !*head)
		return (NULL);

	l_itr = *head;

	next = l_itr->next;
	l_itr->next = NULL;

	while (next)
	{
		*head = next->next;
		next->next = l_itr;
		l_itr = next;
		next = *head;
	}

	*head = l_itr;

	return (*head);
}
