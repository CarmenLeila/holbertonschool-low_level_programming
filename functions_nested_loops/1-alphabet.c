#include <stdio.h>
#include "main.h"

/**
 * print_alphabet -Function that print the alphabet, in lowercase
 *
 * Return:Always void
 */

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
