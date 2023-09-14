#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int i, j;
	int a, b;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			a = i / 10;
			b = i % 10;
			if (a < 1)
			{
				_putchar(b + '0');
			}
			else
			{
				_putchar(a + '0');
				_putchar(b + '0');
			}
		}
		_putchar('\n');
	}
}
