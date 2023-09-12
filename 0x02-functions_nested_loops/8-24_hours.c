#include "main.h"

/**
 * jack_bauer - prints hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
		a = i / 10;
		b = i % 10;

		for (j = 0; j < 60; j++)
		{
			c = j / 10;
			d = j % 10;

			_putchar('a');
			_putchar('b');
			_putchar(':');
			_putchar('c');
			_putchar('d');
			_putchar('\n');
		}
	}
}
