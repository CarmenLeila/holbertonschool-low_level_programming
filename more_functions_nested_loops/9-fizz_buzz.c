#include "main.h"

/**
 * main - test code
 * Return: Always 0 (success)
 */

int main(void)
{
	print_multiple_fizz_buzz();
	return (0);
}

/**
 * print_multiple_fizz_buzz - function prints the numbers from 1 to 100
 * Return: nothing
 */

void print_multiple_fizz_buzz(void)
{
	int n = 0;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 5 == 0) && (n % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}
