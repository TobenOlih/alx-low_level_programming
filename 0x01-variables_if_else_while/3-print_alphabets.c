#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 if succesful
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(tolower(ch));
	}
	for (ch = 'a' ; ch <= 'z'; ch++)
	{
		putchar(toupper(ch));
	}
	putchar('\n');
	return (0);
}
