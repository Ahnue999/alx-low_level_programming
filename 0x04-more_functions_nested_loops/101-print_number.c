#include "main.h"

/**
 * print_line - prints lowercase alphabet
 * Return: void
 */
void print_line(int n)
{
	int a, b, c, d;


	if (n < 0)
		m = -n;

	if (m > 0 && m <= 9)
	{
		if (n < 0)
			_putchar('-');
		_putchar(m + '0');
	}
	if (m >= 10 && m <= 99)
	{
		if (n < 0)
			_putchar('-');
		_putchar(m / 10 + '0');
		_putchar(m % 10 + '0');
	}
	if (m >= 100 && m <= 999)
	{
		if (n < 0)
			_putchar('-');
		_putchar(m / 100 + '0');
		_putchar((m / 10) % 10 + '0');
		_putchar(m % 10 + '0');
	}
	if (m >= 1000 && m <= 9999)
	{
		if (n < 0)
			_putchar('-');
		_putchar(m / 1000 + '0');
		_putchar((m / 100) % 10 + '0');
		_putchar((m / 10) % 10 + '0');
		_putchar(m % 10 + '0');
	}
}
