#include <stdio.h>

/**
 * _isalpha - Checks if a character given in parameter is an alphabet
 *
 * @c: is a character passed in parameters
 *
 * Return: returns 1 if character is in lowercase or uppercase and 0 otherwise
 */
int _isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
