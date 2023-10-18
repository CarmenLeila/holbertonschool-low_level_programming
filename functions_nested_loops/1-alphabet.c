#include <stdio.h>

/**
 * main -Function that print the alphabet, in lowercase
 *
 * Return:Always void
 */
void print_alphabet ()
{
	int c = 0;
	while('a' + c <= 'z')
	{
		putchar('a' +c);
		c++;
	}
	putchar('\n');
	return;
}
