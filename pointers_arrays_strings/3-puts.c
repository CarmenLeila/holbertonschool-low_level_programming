#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 *
 * @str: is my input string
 *
 */
void _puts(char *str)
{
	int res;

	for(res = 0; str[res] != '\0';res++)
	{
		putchar(str[res]);
	}
		putchar('\n');
}
