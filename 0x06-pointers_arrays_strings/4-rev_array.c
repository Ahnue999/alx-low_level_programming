#include "main.h"


/**
  * swap - swap two numbers
  * @x: first number
  * @y: second number
  * Return: void
  */
void swap(int *x, int *y)
{
	int temp;

	temp = *y;
	*y = *x;
	*x = temp;
}

/**
  * reverse_array - reverse the array
  * @a: a pointer to the first member of an array
  * @n: number of array elements
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
		swap(&a[i], &a[n - i - 1]);
}
