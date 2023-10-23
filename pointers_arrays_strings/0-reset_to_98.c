#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - takes a pointer and updates the value
 *
 * @n: pointer used in program
 *
 * Return: nothing
 */

void reset_to_98(int *n)
{
	*n = 98;
	_putchar("*n=%d\n", *n);
	reset_to_98(&n);
	_putchar("*n=%d\n", *n);
}
