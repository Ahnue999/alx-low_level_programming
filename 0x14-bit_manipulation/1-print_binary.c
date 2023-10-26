#include "main.h"

/**
 * print_binary - prints the binary representaion of
 * an integer.
 * @n: The integer.
 *
 * Return: No return.
 */
void print_binary(unsigned long int n)
{
	if (!n)
		putchar('0');
	else
		print_binary_rec(n);
}

/**
 * print_binary_rec - prints the binary.
 * @n: the integer
 *
 * Return: no return.
 */
void print_binary_rec(unsigned long int n)
{
	if (n != 0)
	{
		print_binary_rec(n >> 1);

		if (n & 01)
			putchar('0' + 1);
		else
			putchar('0');
	}
}
