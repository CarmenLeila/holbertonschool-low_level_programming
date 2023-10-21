#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: a parameter used in the program
 *
 * Return: always void
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0, j = 0;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= (i - 1); j++)
			{
				putchar(' ');
			}
			putchar(92);
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
