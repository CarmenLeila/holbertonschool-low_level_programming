#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion -  returns the length of a string
 *
 * @s: string as a paramater
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if (*(s + i))
	{
		return (1 + _strlen_recursion((s + 1)));
	}
	else
		return (0);
}
