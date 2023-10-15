#include <stdio.h>
/**
 * main - Program that prints the size of various types
 * Return:0 (Success)
 */
int main(void)
{       char c;
	int i;
	long int b;
	long long int h;
	float f;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);	
}
