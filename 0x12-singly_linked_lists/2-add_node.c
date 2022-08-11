#include "lists.h"
#include <string.h>

/**
 * add_node - add a new node at the beginning of a <list_t> list
 * @head: pointer to the head pointer of the list
 * @str: the string member of the new node
 *
 * Return: pointer to the new node or NULL on error
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;

	new = malloc(sizeof(*new));
	if (!head || !new)
		return (NULL);

	new->str = strdup(str);
	if (str && !(new->str))
	{
		free(new);
		return (NULL);
	}
	new->next = *head;
	*head = new;

	while (str && str[len])
	{
		len++;
	}
	new->len = len;

	return (new);
}
