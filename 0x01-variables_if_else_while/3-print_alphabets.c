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
	{
		putchar(y);
		if (y == 'z')
		{
			continue;
		}
	}
	for (Y = 'A'; Y <= 'Z'; Y++)
	{
		putchar(Y);
		if (y == 'Z')
		{
		break;
		}
	}
	putchar('\n');
	return (0);
}
