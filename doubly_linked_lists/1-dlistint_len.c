#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer that points to the start of a dlistint_t list
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *tmp;

	if (h == NULL)
		return (0);

	tmp = h;
	while (tmp->prev != NULL)
		tmp = tmp->prev;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
