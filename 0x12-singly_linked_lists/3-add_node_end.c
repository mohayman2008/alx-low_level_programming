#include "lists.h"
#include <string.h>

/**
 * add_node_end - add a new node at the end of a <list_t> list
 * @head: pointer to the head pointer of the list
 * @str: the string member of the new node
 *
 * Return: pointer to the new node or NULL on error
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *l_itr, *new;

	new = malloc(sizeof(*new));
	if (!head || !new)
		return (NULL);

	new->str = strdup(str);
	if (str && !(new->str))
	{
		free(new);
		return (NULL);
	}

	new->next = NULL;

	while (str && str[len])
	{
		len++;
	}
	new->len = len;

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
