#include "main.h"

/**
 *  * puts2 - prints every other character of a string
 *
 * @s: pointer to a char or string
 *
 * Return: Nothing
 */
void puts2(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (c % 2 == 0)
		{
			putchar(s[c]);
		}
	}
	putchar('\n');
}
