#include <stdio.h>

int main(void)
{
	int c = 0;

	for (c = 0;c <= 9;c++)
	{
		putchar ('0' + c);
		if (c != 9)
		{
			putchar (20);
			putchar (' ');
		}
	}
	putchar (“\n”);
return (0);
}
