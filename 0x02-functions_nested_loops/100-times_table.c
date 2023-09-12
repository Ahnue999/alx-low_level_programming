#include "main.h"

/**
 * times_table- prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	if (n >= 0 && n <= 15)
	{
		int i, j;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar((i * j) + '0');
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
