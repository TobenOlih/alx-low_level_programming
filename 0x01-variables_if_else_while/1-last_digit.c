#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - complete the code using an if statement
 *
 * Return: 0 if exited properly
 *
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nl = n % 10;
	printf("the last string of %d is %d", n, nl);
	if (nl > 5)
	{
		printf("%d and is greater than 5\n", nl)
	}
	else if (nl == 0)
	{
		printf("%d and is 0\n", nl)
	}
	else if (nl < 6, nl != 0)
	{
		printf("%d and is less than 6 and not 0\n", nl)
	}
	return (0);
}
