#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - entry point and print_alhabet - print alphabets
 *
 * Return: Always 0.
*/
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
