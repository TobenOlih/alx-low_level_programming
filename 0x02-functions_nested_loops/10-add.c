#include <stdio.h>
#include "main.h"
/**
 * add - entry point
 * @i: parameter
 * @j: parameter
 * Return: 0 if successful
*/
int add(int i, int j)
{
	int r;

	r = add(i, j);
	printf("%d\n", r);
	return (0);
}
