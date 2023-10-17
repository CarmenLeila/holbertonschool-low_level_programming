#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Program that prints the alphabet in lowercase
 * Return:Always 0 (Success)
 */

int main(void)
{
	char d, e, q;

	q = 'q';
	e = 'e';

	for (d = 'a'; d <= 'z' ; d++)
	{
	if (d != q && d != e)
	putchar(d);
	}
	putchar('\n');
return (0);
}
