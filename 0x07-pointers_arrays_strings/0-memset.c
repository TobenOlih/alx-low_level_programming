#include<stdio.h>
#include"main.h"
/**
 * *_memset - fill memory with a constant byte
 * @i: pointer to the memory area
 * @c: the byte to be filled
 * @n: number of bytes to be filled
 * Return: pointer to the memory area
 */
char *_memset(char *i, char c, unsigned int n){
    unsigned int j;

    for (j = 0; j < n; j++)
        i[j] = c;
    return (i);
}