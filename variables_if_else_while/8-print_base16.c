#include <stdio.h>

/**
 * main -Program that prints all the numbers of base 16
 * Return:Always 0 (Success)
 */

int main(void)
{
	char number_char = '0';
	char letter_char = 'a';

	while (number_char <= '9')
	{
		putchar(number_char);
		number_char++;
	}
	while (letter_char <= 'f')
	{
		putchar(letter_char);
		letter_char++;
	}
	putchar ('\n');
	return (0);
}
