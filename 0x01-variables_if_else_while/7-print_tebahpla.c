#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 *
 * Return: 0 if executed successfully
*/
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
