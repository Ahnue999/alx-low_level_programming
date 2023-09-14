#include "main.h"

/**
  * print_square - prints diagonal of size n
  * @size: size
  * Return: void
  */
void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
