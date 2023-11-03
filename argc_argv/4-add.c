#include <stdio.h>
#include <stdlib.h>

/**
 * main - cheks the code
 * @argc: arguments integer
 * @argv: an argument vector
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int res = 0, a = 1, b = 0;

	while (*(argv + a))
	{
		b = 0;
		while (*(*(argv + a) + b))
		{
			if (!(*(*(argv + a) + b) >= '0' && *(*(argv + a) + b) <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			b++;
		}
		res += atoi(*(argv + a));
		a++;
	}
	printf("%d\n", res);
	return (0);
}

