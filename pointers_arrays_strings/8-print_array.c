#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: an input array
 * @n: an integer used as the length of array
 */

void print_array(int *a, int n)
{
	int b = 0;

	while (*(a + b) && b < n)
	{
		printf("%d", *(a + b));
		if (!(b == (n - 1) || (*(a + b + 1) == '\0')))
			printf(", ");
		b++;
		putchar('\n');
	}
	printf("\n");
}
