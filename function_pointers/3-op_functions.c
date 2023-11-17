#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - returns the sum of two integers
 * @a:first parameter
 * @b: second parameter
 * Return: an integer
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of two integers
 * @a: first integer
 * @b: the second one
 * Return: an integer
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: an integer
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of two integers
 * @a: first parameter
 * @b: second parameter
 * Return: an int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
			exit(100);
	}
	return (a / b);
}
/**
 * op_mod - returns the remainder of division of two integers
 * @a: first parameter as an integer
 * @b: second parameter as an integer
 * Return: an int
 */
int op_mod(int a, int b)
{
	if (b == 0)
        {
                printf("Error\n");
                        exit(100);
	}
	return (a % b);
}
