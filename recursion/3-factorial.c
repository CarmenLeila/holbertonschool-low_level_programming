#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: integer as a parameter of my function
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
