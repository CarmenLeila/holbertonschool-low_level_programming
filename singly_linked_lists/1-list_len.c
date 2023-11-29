#include <stdio.h>
#include "lists.h"

/**
 * list_len - function used to return the number of elements in a linked list
 * @h: a pointer to the head of the list
 * Return: the number of elements in linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
