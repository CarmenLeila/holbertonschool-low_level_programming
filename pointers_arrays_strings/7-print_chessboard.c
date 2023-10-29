#include "main.h"

void _print_array(char *);

/**
 * print_chessboard - prints the chessboard
 * @a: a 2D array
 * Return: Nothing at all
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i = 0;
	_print_array(a[i]);
}
/**
 * _print_array - prints an array
 * @a: array to print
 * Return: nothing at all
 */
void _print_array(char *a)
{
	unsigned int i = 0;

	while ((a[i] == ' ') || (a[i] <= 'z' && a[i] >= 'a') || (a[i] <= 'Z' && a[i] >= 'A'))
	{
				putchar(a[i]);
				i++;
				if (((i % 8) == 0) && (i != 0))
					putchar('\n');
	}
}
