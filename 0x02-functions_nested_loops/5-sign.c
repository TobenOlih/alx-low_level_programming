#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 *  * print_sign - entry point
 * @n: parameter
 *
 * Return: 1 if postive and -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
