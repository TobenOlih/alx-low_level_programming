#include<stdio.h>
#include"main.h"
/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers.
 * @a: pointer to an array of integers
 * @size: size of the array
 * Return: void
*/
void print_diagsums(int *a, int size)
{
    int i, j, sum1 = 0, sum2 = 0;

    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i == j)
            {
                sum1 += a[i * size + j];
            }
            if (i + j == size - 1)
            {
                sum2 += a[i * size + j];
            }
        }
    }
    printf("%d, %d\n", sum1, sum2);
}