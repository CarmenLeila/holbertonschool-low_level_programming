#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Program that prints all single digit numbers of base 10
 * Return:Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar ('0' + c);
	}
		putchar('\n');
return (0);
}
