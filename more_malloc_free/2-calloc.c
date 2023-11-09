#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for array
 * @nmemb: number of elements
 * @size: size in bytes of elements
 * Return: pointer to new memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int arr_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr_size = nmemb * size;
	arr = malloc(arr_size);
	if (arr == NULL)
		return (NULL);
	while (i < arr_size)
	{
		arr[i] = 0;
		i++;
	}
	return (arr);
}
