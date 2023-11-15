#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * @array: function that is used
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (n <  size)
		{
			action(array[n]);
			n++;
		}
	}
}
