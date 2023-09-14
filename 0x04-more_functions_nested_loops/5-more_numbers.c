#include "main.h"

/**
 * more_numbers - prints lowercase alphabet
 * Return: void
 */
void more_numbers(void)
{
	int i, j;
	int a, b;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			a = i / 10;
			b = i % 10;
			if (a > 0)
				_putchar(a + '0');
			_putchar(b + '0');
		}
		_putchar('\n');
	}
}
