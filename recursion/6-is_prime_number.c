#include "main.h"

int check_division(int, int);

/**
 * is_prime_number -returns 1 if the input integer is a prime number
 *
 * @n: integer
 *
 * Return: integer value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (check_division(n, 2));
}
/**
 * check_division - function used for checking
 *
 * @n: integer value
 *
 * @a: integer value
 *
 * Return: integer 
 */
int check_division(int n, int a)
{
	if (a == n)
		return (1);
	else if (n % a == 0)
		return (0);
	else
		return (check_division(n, a + 1));
}
