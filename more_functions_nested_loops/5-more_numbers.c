#include "main.h"

/**
 * more_numbers - print numbers
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int a = 0, i = 0;

	while (a < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			int Da = i / 10, Ra = i % 10;

			if (Da != 0)
			{
				putchar('0' + Da);
			}
			putchar('0' + Ra);
		}
		putchar('\n');
		a++;
	}
}
