#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: integer value
 * @argv: a vector
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int n = 0;

	while (*(argv + n))
	{
		n++;
	}
	printf("%d\n", n - 1);
	return (0);
}
