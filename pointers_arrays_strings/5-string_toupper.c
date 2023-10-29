#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @n: a string as parameter
 * Return: a string value
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (*(n + i))
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= ('a' - 'A');
		}
		i++;
	}
	return (n);
}
