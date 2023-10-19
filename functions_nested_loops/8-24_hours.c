#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: Always 0.
 */

void jack_bauer(void)
{
	int hour = 0, min = 0, Dhour = 0, Dmin = 0, Uhour = 0, Umin = 0;

	while (hour < 24)
	{
		while (min < 60)
		{
			Dhour = (hour - (hour % 10)) / 10;
			Uhour = hour % 10;
			Dmin = (min - (min % 10)) / 10;
			Umin = min % 10;
			_putchar ('0' + Dhour);
			_putchar ('0' + Uhour);
			_putchar (':');
			_putchar ('0' + Dmin);
			_putchar ('0' + Umin);
			_putchar ('\n');
			min++;
		}
		min = 0;
		hour++;
	}
}
