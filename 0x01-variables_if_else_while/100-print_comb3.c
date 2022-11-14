#include <stdio.h>

/**
 *main-program entry point
 *
 *Return:0 if no error,non zero if error.
 */
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '1'; j <= '9'; j++)
		{
		if (i != j && i < j)
		 {
		    putchar(i);
		    putchar(j);
		    putchar(',');
		    putchar(' ');
		 }
		else
		{
			continue;
		}
		if (i == '8' && j == '9')
		{
			break;
		}
		}
	}
	putchar('\n');
	return (0);
}
