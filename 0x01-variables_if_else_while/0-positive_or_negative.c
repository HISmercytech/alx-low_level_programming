#include <stdlib.h>
#include <time.h>
/**
 * main-program entry point.
 * Return:0-no error,non zero value if error.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d\n", n, "is positive\n");
	}
	else if (n == 0)
	{
		printf("%d", n, "is zero\n");
	}
	else
	{
		printf("%d", n, "is negative\n");
	}
	return (0);
}
