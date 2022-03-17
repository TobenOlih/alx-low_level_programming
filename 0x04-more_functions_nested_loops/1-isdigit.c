#include<stdio.h>
#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: parameter to check
 * Return: 1 if a digit otherwise 0
*/
int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= 9; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
