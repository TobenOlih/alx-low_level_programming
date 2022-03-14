#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 if successful
*/
int main(void)
{
	int l, m, n, lm, ml, mn, nm, ln, nl, lmn, nml;

	for (l = 0; l <= 7; l++)
	{
		for (m = l + 1; m <= 8; m++)
		{
			for (n = l + 2; n <= 9; n++)
			{
				if (m != l || n != m || l != n || lm != ml || mn != nm || ln != nl || lmn != nml)
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
