#include "main.h"
/**
 * puts_half -i prints half of a string
 *
 * @str: the input string
 */
void puts_half(char *str)
{
	int res, meta;
	for (res = 0; str[res] != '\0'; res++)
	{
		meta = res / 2;
		if (res % 2 == 1)
			meta++;
	}
	while (meta < res)
	{
		putchar(str[meta]);
		meta++;
	}
	putchar('\n');
}
