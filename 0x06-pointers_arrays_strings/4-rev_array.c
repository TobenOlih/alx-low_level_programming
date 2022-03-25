#include<stdio.h>
#include"main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array of integers
 * @n: size of array 
*/
void reverse_array(int *a, int n)
{
    int i, j;
    int temp;

    i = 0;
    j = n - 1;
    while (i < j)
    {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}