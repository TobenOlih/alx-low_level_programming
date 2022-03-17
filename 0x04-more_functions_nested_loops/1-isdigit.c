#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: input number
 * Return: 1 if a number (0 to 9), 0 is otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
