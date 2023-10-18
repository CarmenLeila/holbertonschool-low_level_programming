#include <stdio.h>

/**
 * main -Program that prints the lowercase alphabet in reverse
 * Return:Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 122; c >= 97; c--)
	{
		putchar(c);
	}
	putchar('\n');
return (0);
}
