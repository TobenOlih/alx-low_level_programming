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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				for (k = 0; accept[k] != '\0'; k++)
				{
					if (s[i] != accept[k])
					{
						return (i);
					}
				}
			}
		}
	}
	return (i);
}
