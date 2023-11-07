#include "main.h"

/**
 * create_array - creates an array of char,initializes it with a specific char
 *
 * @size: the size of the memory to print
 *
 * @c: character of an array
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
	
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		*(array + i) = c;
		i++;
	}
	return (array);
}
