#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;
	if (d > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("last digit of %d is %d and is zero\n", n, d);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and is not 0\n", n, d);
	}
	return (0);
}
