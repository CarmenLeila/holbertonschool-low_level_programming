#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 *
 * @dest: string for destination
 *
 * @src: string for source
 *
 * @n: integer as paramater
 *
 * Return: a string.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0, length = 0;
	
	while (*(src + length))
	{
		length++;
	}
	while (*(src + j) && j < n)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	while ((length + j) < n)
	{
		*(dest + length + j) = '\0';
		j++;
	}
	return (dest);
}
