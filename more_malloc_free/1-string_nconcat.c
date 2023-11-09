#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string 
 * @s2: second string
 * @n: an integer
 * Return: pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3, *empt;
	unsigned int m, len1, len2;

	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	m = len1 = len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	len2++;
	s3 = malloc((len1 + len2) * sizeof(*s1));
	if (s3 == NULL)
		return (NULL);
			m = 0;
			while (m < len1)
			{
				s3[m] = s1[m];
				m++;
			}
			n = 0;
			while (n <= len2)
			{
				s3[m] = s2[n];
				m++;
				n++;
			}
			return (s3);
}
