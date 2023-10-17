#include <stdio.h>
/**
 * main -Program that prints all the numbers of base 16
 * Return:Always 0 (Success)
 */

int main(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		putchar ('0' + c);
		if (c != 9)
		{
			putchar (20);
			putchar (' ');
		}
	}
	putchar (“\n”);
return (0);
}
