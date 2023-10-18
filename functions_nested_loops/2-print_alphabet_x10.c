#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -prints 10 times the alphabet in lowercase
 *
 * Return:Always void.
 */

void print_alphabet_x10(void)
{
	int c = 0, l = 0;
	for (l = 0; l < 10; l++)
	{
		while ('a' + c <= 'z')
		{
			putchar('a' + c);
			c++;
		}
		putchar('\n');
		c=0;
	}
}
