#include<stdio.h>
#include"main.h"
/**
 * puts_recursion - prints a string, followed by a new line,
 * using recursion
 * @s: string to print
 * Return: void
*/
void puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		puts_recursion(s + 1);
	}
}
