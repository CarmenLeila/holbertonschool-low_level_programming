#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - function that is used in the program
  * @argc: my first parameter as an int
  * @argv: my second parameter as a charater
  *
  * Return: an integer
  */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*function)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(*(argv + 1));
	b = atoi(*(argv + 3));
	function = get_op_func(*(argv + 2));
	if (function == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = function(a, b);

	printf("%d\n", result);

	return (0);
}
