#include <stdlib.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: pointer to the head of the list
 * Reurn: nothing
 */
void free_list(list_t *head)
{
	list_t *freedom = head;

	while (freedom != NULL)
	{
		list_t *next_node = freedom->next;

		free(freedom->str);
		free(freedom);
		freedom = next_node;
	}
}
