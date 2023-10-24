#include "main.h"

/**
 * print_rev - This function prints a reverse string
 *
 * @s:is the input string
 */
void print_rev(char *s)
{
	int res;

	for (res = 0; s[res] != '\0'; res++);
	for (res = res - 1; s[res] != '\0'; res--)
	{
		putchar(s[res]);
	}
	putchar('\n');
}
