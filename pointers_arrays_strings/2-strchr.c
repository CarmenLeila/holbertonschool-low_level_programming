#include "main.h"
#include <stdio.h>

/**
 *  * _strchr - locates a character in a string
 * @s: a string value
 * @c: a character value
 * Return: a pointer to a char value
 */
char *_strchr(char *s, char c)
{
	int n = 0;

	while(*(s + n))
	{
		if (*(s + n) == c)
		{
			return (s + n);
		}
	n++;
	}
	if (c == '\0')
		return (s + n);
	return (NULL);
}
