#include "main.h"

/**
 * _strcpy - copy of a string
 *
 * @dest: string for destination
 *
 * @src: source string
 *     
 * Return: the pointer to the string dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	while (*(src + n))
	{
		*(dest + n) = *(src + n);
		n++;
	}
	*(dest + n) = '\0';
	return (dest);
}
