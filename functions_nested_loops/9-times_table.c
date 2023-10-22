#include "main.h"
#include <stdio.h>

void print_digit(int);

/**
 * times_table - prints the 9 times table
 *
 * Return: Nothing
 */

void times_table(void)
{
	int i = 0, n = 0, m = 0, max = 9;

	for (n = 0; n <= max; n++)
	{
		for (m = 0; m <= max; m++)
		{
			int num = 0, d1 = 0, d2 = 0, d3 = 0;

			num = m * i;
			d3 = num % 10;
			d2 = (num - d3) / 10;
			d1 = (num - (d2 * 10)) / 10;

			if (num != 0)
			{
				print_digit(d1);
				print_digit(d2);
			}
			else if (m != 0)
			{
				putchar(' ');
				putchar(' ');
			}
			putchar('0' + d3);
			if (m != max)
			{
				putchar(',');
			}
		}
		putchar('\n');
		m = 0;
		i++;
	}
}

/**
 * print_digit - print a digit
 *
 * @d: a parameter
 * Return: Always nothing
 */
void print_digit(int d)
{
	if  (d == 0)
	{
		putchar(' ');
	}
	else
	{
		putchar('0' + d);
	}
}
