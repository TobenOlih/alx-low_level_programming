#include<stdio.h>
#include "main.h"

/**
 * print_times_table - prints the 100 times table, starting with 0.
 * @n: parameter iterable
 * Return: Always 0.
*/
void print_times_table(int n)
{
	int i, j, k;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (j == 0)
			{
				_putchar(k + '0');
			}
			else if (k < 15 || j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10 || k < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			else if (k >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 100) + '0');
				_putchar(((k / 10) % 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
