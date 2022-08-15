#include "lists.h"

/**
 * free_listint - frees memory dynamically allocared to a <listint_t> list
 * @head: the head pointer of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current, *next;

	next = head;
	while (next)
	{
		current = next;
		next = current->next;
		free(current);
	}
}
