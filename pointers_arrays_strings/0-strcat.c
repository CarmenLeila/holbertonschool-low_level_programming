#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings.
 *
 * @dest: is a string for destination  
 *
 * @src: is a source 
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (*(dest + length))
	{
		length++;
	}
	while (*(src + i))
	{
		*(dest + length + i) = *(src + i);
		i++;
	}
	return (dest);
}
