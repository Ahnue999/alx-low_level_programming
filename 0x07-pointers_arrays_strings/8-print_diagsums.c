#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - sum the two diagonals of a square matrix of integers 
 * @a: a pointer to the array
 * @size: the size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}

	for (i = 0, j = size - 1; i < size; i++, j--)
	{
		sum2 += a[i][j];
	}

	printf("%d, %d\n", sum1, sum2);
}
