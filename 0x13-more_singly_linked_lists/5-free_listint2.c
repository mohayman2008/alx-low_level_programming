#include "lists.h"

/**
 * free_listint2 - frees memory dynamically allocared to a <listint_t> list
 *		and set head pointer to NULL
 * @head: pointer to the head pointer of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	next = *head;
	*head = NULL;
	while (next)
	{
		current = next;
		next = current->next;
		free(current);
	}
}
