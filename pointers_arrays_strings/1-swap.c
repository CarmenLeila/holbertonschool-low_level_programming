#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 *
 * @b:second integer
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int res;

	res = *a;
	*a = *b;
	*b = res;
}
