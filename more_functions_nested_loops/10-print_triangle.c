#include "main.h"

/**
 * print_triangle - Function that prints a triangle, followed by a new line.
 * @size: the int for the paramaters of my function
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a = 0, b = 0;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b >= (size - 1 - a))
				{
					putchar('#');
				}
				else
				{
					putchar(' ');
				}
			}
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
