#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * islower -checks for lowercase character
 * @C:the character that is going to be checked
 * Return:1 if c is lowercase or  0 otherwise
 */

int __islower(char C)
{
	if( C >= 'a' && C <= 'a')
	{
		return (1);
	}
	return (0);
}
