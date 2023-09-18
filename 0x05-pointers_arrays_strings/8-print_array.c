#include "main.h"
#include <stdio.h>

/**
  * print_array - prints a string
  * @a: the array
  * @n: the num
  * Return: void
  */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d, ", *(a + i));
		else
			printf("%d\n", *(a + i));
	}
}
