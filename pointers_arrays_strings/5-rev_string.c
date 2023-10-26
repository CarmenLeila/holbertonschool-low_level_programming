#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 *
 * @s: is the pointer that point to a string
 */
void rev_string(char *s)
{
	int i, len;

	char *Car, *men = s;

	for (i = 0; s[i] != '\0' && s[i + 1] != '\0'; i++)
	{
		Car++;
	}
	len = i + 1;
	men = s;
	for (i = 0; i < len / 2; i++)
	{
		char x;

		x = *men;
		*men = *Car;
		*Car = x;
		Car++;
		men--;
	}
	men[len + 1] = '\0';
}
