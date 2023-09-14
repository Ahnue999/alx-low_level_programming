#include "main.h"

/**
  * print_square - prints diagonal of size n
  * @size: size
  * Return: void
  */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			if (i != size - 1)
				_putchar('\n');
		}
	}
	_putchar('\n');
}
