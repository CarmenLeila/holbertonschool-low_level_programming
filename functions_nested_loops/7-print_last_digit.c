#include "main.h"

/**
 * print_last_digit - Print the last digit of an int
 *
 * @i: int value passed in parameters
 * Return: the last digit
 */

int print_last_digit(int i)
{
	i = i  % 10;
	if (i < 0)
	{
		i = i * -1;
	}
	else
	{
		i = i;
	}
	_putchar('0' + i);
	return (i);
}
