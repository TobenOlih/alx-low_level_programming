#include<stdio.h>
#include"main.h"
/**
 * _strspn - Finds the length of a prefix substring in a string
 * @s: The string to be searched
 * @accept: The string to be searched for in s
 * Return: The length of the prefix substring
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	i = 0;
	while (s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = i;
				while (s[k] == accept[j])
				{
					k++;
				}
				return (k - i);
			}
		}
	}
}
