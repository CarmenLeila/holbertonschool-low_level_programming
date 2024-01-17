#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of the value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, left, right;

	if (array == NULL)
	return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
	printf("Searching in array: ");
	for (index = left; index < right; index++)
		printf("%d, ", array[index]);
	printf("%d\n", array[index]);

	index = (left + right) / 2;
	if (array[index] < value)
		left = index + 1;
	else if (array[index] > value)
		right = index - 1;
	else
		return (index);
	}
	return (-1);
}
