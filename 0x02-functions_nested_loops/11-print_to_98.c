#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: the number to print from
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		_putchar(n + '0');
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			_putchar(n + '0');
			n++;
		}
	}
	else
		while (n > 98)
		{
			_putchar(n + '0');
			n--;
		}
}
