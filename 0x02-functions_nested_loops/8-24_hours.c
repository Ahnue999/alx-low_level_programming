#include "main.h"

/**
 * jack_bauer - prints hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 24; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j < 60; j++)
		{
			c = j / 10;
			d = j % 10;

			_putchar(a + '0');
			_putchar(b + '0');
			_putchar(':');
			_putchar(c + '0');
			_putchar(d + '0');
			_putchar('\n');
		}
	}
}
