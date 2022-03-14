#include<stdio.h>
#include <ctype.h>
/**
 * main - print alphabet in upper and lower case
 *
 * Return: 0 if successfully
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(tolower(ch));
		}
	}
	return (0);
}
