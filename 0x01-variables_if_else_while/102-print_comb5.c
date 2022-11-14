#include <stdio.h>

/**
 *main-program entry point
 *
 *Return:0 if no error,non zero if error.
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; i++)
		{
		putchar('0' + i / 10);
		putchar('0' + i % 10);
		putchar(' ');

		putchar('0' + j / 10);
		putchar('0' + j % 10);
		
		if (i == 98 && j == 99)
		{
		break;
		}
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
