#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: an integer that is used in the program
 * Return: nothing
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i = 0;

		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
