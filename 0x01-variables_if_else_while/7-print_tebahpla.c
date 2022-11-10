#include <stdio.h>

/**
 *main-program entry point
 *
 *Return:0 if no error,non zero if error.
 */
int main(void)
{
	char y;

	for (y = 'z'; y >= 'a'; y--)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
