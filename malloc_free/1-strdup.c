#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strdup -  returns a pointer to a newly allocated space in memory
 *
 * @str: a string value
 *
 *  Return: a string value
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *copy;

	while (*(str + i))
	{
		i++;
	}
	copy = malloc(sizeof(char) * (i + 1));

	if (copy == NULL)
		return (NULL);
	i = 0;
	while (*(str + i))
	{
		*(copy + i) = *(str + i);
		i++;
	}
	*(copy + i) = '\0';
	return (copy);
}
