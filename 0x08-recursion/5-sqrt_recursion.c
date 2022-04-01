#include "main.h"
/**
 * _sqrt_recursion - returns the value of x raised to the power of y
 * @n: base
 * Return: x raised to the power of y
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt_recursion(n - 1) + 1);
}
