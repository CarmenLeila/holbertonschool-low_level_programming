#include "lists.h"

/**
 * get_dnodeint_at_index - function returns the nth node of a linked list
 * @head: list
 * @index: index
 * Return: the nth node of a linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node, *tmp;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	tmp = head;
	node = NULL;
	while (tmp->prev != NULL)
		tmp = tmp->prev;

	while (i != index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	if (i == index && tmp != NULL)
		node = tmp;

	return (node);
}
