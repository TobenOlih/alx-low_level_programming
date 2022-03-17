#include<stdio.h>
#include "main.h"
/**
 * _isupper - check the code
 * @c: parameter to be checked
 * Return: 1 if c is uppercase 0 otherwise
*/
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
