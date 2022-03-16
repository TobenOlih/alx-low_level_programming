#include<stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - entry point
 * @c: parameter
 *
 * Return: 0 if successful
*/
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
