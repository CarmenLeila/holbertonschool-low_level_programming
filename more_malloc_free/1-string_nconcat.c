#include <stdlib.h>
#include <string.h>

unsigned int _length(char *str);
/**
 * string_nconcat - concatenates two strings
 * @s1: first parameter
 * @s2: second parameter
 * @n: an integer
 * Return: pointer shall point to a newly allocated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, a = 0, b = 0;
	char *copy;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[a])
		a++;
	if (n >= a)
		b = i + a;
	else
		b = i + n;

	copy = malloc(sizeof(char) * b + 1);
	if (copy == NULL)
		return (NULL);
	a = 0;
	while (j < b)
	{
		if (j <= i)
			copy[j] = s1[j];
		if (j >= i)
		{
			copy[j] = s2[j];
			a++;
		}
		j++;
	}
	copy[j] = '\0';
	return (copy);
}
