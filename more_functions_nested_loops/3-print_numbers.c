#include "main.h"

/**
 * print_numbers - print digits from 0 to 9
 * Return: nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar('\n');
}
