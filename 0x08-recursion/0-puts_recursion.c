#include<stdio.h>
#include"main.h"
/**
 * puts_recursion - prints a string, followed by a new line, 
 * using recursion
 * @str: string to print
 * Return: void
*/
void puts_recursion(char *str)
{
	if (*str == '\0')
		putchar('\n');
	else
	{
		putchar(*str);
		puts_recursion(str + 1);
	}
}