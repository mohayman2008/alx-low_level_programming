#include "lists.h"
#include <string.h>

/**
 * free_list - frees memory dynamically allocared to a <list_t> list
 * @head: the head pointer of the list
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	next = head;
	while (next)
	{
		current = next;
		next = current->next;
		free(current->str);
		free(current);
	}
}
