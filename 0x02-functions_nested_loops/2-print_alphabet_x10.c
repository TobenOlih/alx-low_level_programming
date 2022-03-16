#include<stdio.h>
#include<main.h>
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 * Return: 0 if successful
*/
void print_alphabet_x10(void)
{
	char i, j;

	i = 1;

	while (i <= 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar (j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
