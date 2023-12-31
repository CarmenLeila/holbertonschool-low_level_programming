#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 *
 * @s: is a string that's gonna be converted
 *
 * Return: an integer.
 */
int _atoi(char *s)
{
	int signe = 1;
	int i = 0, res = 0;

	while (*(s + i))
	{
		while (*(s + i) == '-' || *(s + i) == '+')
		{
			if (*(s + i) == '-')
			signe *= -1;
			i++;
		}
		while (*(s + i) <= '9' && *(s + i) >= '0')
		{
			res *= 10;
			res += (*(s + i) - 48);
			i++;
		}
		if (res != 0)
		{
			return (res * signe);
		}
		i++;
	}
	return (res);
}
