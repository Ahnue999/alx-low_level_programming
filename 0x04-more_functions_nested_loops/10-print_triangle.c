#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size
 * Return: Always 0 (Success)
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				putchar(' ');
			}
			for (k = 0; k < i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
