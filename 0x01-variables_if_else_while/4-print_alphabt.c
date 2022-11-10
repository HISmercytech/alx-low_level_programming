#include <stdio.h>

/**
 *main-program entry point
 *
 *Return:0 if no error,non zero if error.
 */
int main(void)
{
	char y;

	for (y = 'a'; y <= 'z'; y++)
	{
		if (y == 'e' || y == 'q')
		{
			continue;
		}
		putchar(y);
	}
	putchar('\n');
	return (0);
}
