#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: is a linked list of type list_t to print
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] %s\n", h->len, h->str);
		number++;
		h = h->next;
	}
	return (number);
}
