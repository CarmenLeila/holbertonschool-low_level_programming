#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first paramater
 *
 * @s2: second parameter
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int n = 0;

	while (s1[n] && s1[n] == s2[n])
	{
		n++;
	}
	return (s1[n] - s2[n]);
}
