#include "main.h"

/**
 * print_square - print a square
 * @size:is a size of square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
