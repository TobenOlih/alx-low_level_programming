#include<stdio.h>
#include"main.h"
/**
 * positive_or_negative - tests function that prints if positive or negative
 * @i: Parameter to test
 * Return: 0
*/
void positive_or_negative(int i)
{
	int i;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);
}
