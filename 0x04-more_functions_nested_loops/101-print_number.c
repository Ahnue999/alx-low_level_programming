#include "main.h"

/**
 * print_number - prints lowercase alphabet
 * @n: number to print
 * Return: void
 */
void print_number(int n)
{
	unsinged int m, d, count;

	if (n < 0)
	{
		_putchar('-');
		m = -1 * n;
	}
	else
		m = n;

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count / 10)
	{
		_putchar((m / count) % 10 + '0');
	}
	_putchar('\n');
}
