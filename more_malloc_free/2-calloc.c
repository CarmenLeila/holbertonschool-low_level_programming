#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function allocates memory for an array
 * @nmemb: integer value
 * @size: integer
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0, n = 0;
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	arr = malloc(n);

	if (arr == NULL)
		return (NULL);
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
