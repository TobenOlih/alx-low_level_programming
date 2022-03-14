#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 if successful
*/
int main(void)
{
	int l, m, n;

	for (l = 0; l <= 7; l++)
	{
		for (m = 8; m <= 8; m++)
		{
			for (n = 9; n <= 9; n++)
			{
				if (n > m && m > n)
				{
					putchar(l + '0');
					putchar(m + '0');
					putchar(n + '0');
					if ((l != 7) || (m != 8) || (n != 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
