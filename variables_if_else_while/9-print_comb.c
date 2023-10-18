#include <stdio.h>

/**
 * main -Program that prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
		if (i != 9)
		{
			putchar(44);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
