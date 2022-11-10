#include <stdio.h>

/**
 *main-program entry point
 *
 *Return:0 if no error,non zero if error.
 */
int main(void)
{
	char y;
	char Y;

	for (y = 'a'; y <= 'z'; y++)
	for (Y = 'A'; Y <= 'Z'; Y++)
	{
		putchar(y);
		putchar(Y);
	}
	putchar('\n');
	return (0);
}
