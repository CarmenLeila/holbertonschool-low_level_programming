#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 *
 * @s: string as parameter
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i))
	{
		i++;
		_print_rev_recursion(s + i);
		putchar(*(s + i - 1));
	}
	else
	{
		return;
	}
}
