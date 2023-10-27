#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: string for destination as first parameter
 *
 * @src: string for source as second parameter
 *
 * @n: integer used for bytes from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (*(dest + length))
	{
		length++;
	}
	while (*(src + i) && i < n)
	{
		*(dest + length + i) = *(src + i);
		i++;
	}
	if (i != 0)
		*(dest + length + i) = '\0';
	return (dest);
}
