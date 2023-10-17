#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**                                                                                                                                                             
 * main - This program will assign a random number to the variable n                                                                                             * Return: Always 0 (Success)                                                                                                                          
 */

int main(void)
{
	int n, lastdig;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;
	if (lastdig > 5);
	{ 
		printf(" the last digit of %d is %d and is greater than 5\n", n, lastdig);
	}
	else if (lastdig == 0);
	{
		printf("the last digit of %d is %d and is zero\n", n, lastdig);
	}
	else
	{
		printf("the last digit of %d is %d and is less than 6 and is not 0\n", n, lastdig);
	}
	return (0);
}
