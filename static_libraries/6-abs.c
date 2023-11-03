#include "main.h"

/**
 * _abs - Compute absolute values of integers
 *
 * @i: integer value passed in parameter
 * Return: absolute value of a number
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
