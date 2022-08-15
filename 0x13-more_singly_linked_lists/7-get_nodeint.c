#include "lists.h"

/**
 * get_nodeint_at_index - get an element of a <listint_t> list,
 *			at a certain index
 * @head: head of the list
 * @index: index of the node to be retrieved
 *
 * Return: pointer to the element if it exists or NULL otherwise
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *l_itr;
	size_t count = 0;

	if (!head)
		return (NULL);

	l_itr = head;
	while (count < index)
	{
		count++;
		if (!l_itr->next)
			return (NULL);
		l_itr = l_itr->next;
	}

	return (l_itr);
}
