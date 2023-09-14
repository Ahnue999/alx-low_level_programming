#include "main.h"

/**
 * print_diagonal - prints diagonal of size n
 * @n: size
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
