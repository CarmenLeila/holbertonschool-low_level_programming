#include "main.h"

int _sqrt_recursivity(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: integer value
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int result = _sqrt_recursivity(n, 0);

	if (result * result != n)
		return (-1);
	else
		return (result);
}
/**
 * _sqrt_recursivity - returns the natural square root of a number
 *
 * @n: integer value
 *
 * @i: integer value
 *
 * Return: integer
 */
int _sqrt_recursivity(int n, int i)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	i++;
	if ((i * i) <= n)
	{
		return (1 + _sqrt_recursivity(n, i));
	}
	else
		return (0);
}
