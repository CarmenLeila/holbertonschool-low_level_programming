#include "main.h"
#include <stdio.h>

/**
 *  * print_diagsums - prints the sum of the two diagonals of a square matrix of integers
 * @a: first parameter
 * @size: size of diagonals
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int n = 0;
	long int sumA = 0, sumB = 0;

	while (n < size)
	{
		sumA += (long) (a + (n * size))[n];
		sumB += (long) (a + (n * size))[size - 1 - n];
		n++;
	}
	printf("%ld, %ld\n", sumA, sumB);
}
