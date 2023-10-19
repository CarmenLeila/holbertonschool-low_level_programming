#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower -checks for lowercase character
 * @C:is a character passed in parameters
 * Return:1 if c is lowercase or  0 otherwise
 */

int _islower(char C)
{
	if (C >= 'a' && C <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
