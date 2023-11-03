#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _isupper - checks for uppercase character.
 * @c: a character which is used in the program
 * * Return: 1 if is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
