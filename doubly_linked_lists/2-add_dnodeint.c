#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: pointer that points to the pointer of the first node in a list
 * @n: is a data as integer
 * Return: the address of the new element or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tmp;

	tmp = malloc(sizeof(dlistint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = (int) n;
	tmp->prev = NULL;

	if (*head != NULL)
	{
		tmp->next = *head;
		(*head)->prev = tmp;
	}
	else
	{
		tmp->next = NULL;
	}

	*head = tmp;

	return (*head);
}
