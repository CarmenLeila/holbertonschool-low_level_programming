#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -Program that assign a random number                                     
 * Return: Always 0 (Success)                                         
 */  
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0) 
	{
	printf("the number is positive\n");
	}
	else if (n < 0)
	{
	printf("the number is negative\n");
	}
	else
	{
	printf("the number is zero \n");
	}
        return (0);
}
