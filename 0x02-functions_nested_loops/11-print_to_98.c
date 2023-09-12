#include "main.h"

/**
 * print_to_98 - prints to 98
 * @n: the number to print from
 *
 * Return: void
 */
void print_to_98(int n)
{

	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			if (n < 97)
				printf("%d, ", n);
			else
				printf("%d", n);
			n++;
		}
	}
	else
		while (n > 98)
		{
			if (n > 99)
				printf("%d, ", n);
			else
				printf("%d", n);
			n--;
		}
}
