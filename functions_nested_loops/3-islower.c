#include <stdio.h>

/**
 * _islower -checks for lowercase character
 * @C:is a character passed in parameters
 * Return:1 if c is lowercase or  0 otherwise
 */

int __islower(char C)
{
	if (C >= 'a' && C <= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
