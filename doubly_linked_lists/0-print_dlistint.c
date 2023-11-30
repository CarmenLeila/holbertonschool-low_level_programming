#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer of a dlistint_t list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		size++;
	}
	return (size);
}
