#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: function that is used
 * @size: size of an array
 * @cmp: pointer to the function
 * Return: -1 if no element matches or if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
		if (size > 0)
		{
			if (array != NULL && cmp != NULL)
			{
				while (size > i)
				{
					if (cmp(array[i]))
						return (i);
					i++;
				}
			}
		}
	return (-1);
}
