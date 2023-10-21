#include "main.h"

/**
 * print_most_numbers - print digits except 2 and 4
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	int r;

	for (r = 0; r <= 9; r++)
	{
		if (r != 2 && r != 4)
		{
			putchar('0' + r);
		}
	}
	putchar('\n');
}
