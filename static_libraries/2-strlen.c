#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: input string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int res;

	for (res = 0; s[res] != '\0' ; res++);

	return (res);
}
