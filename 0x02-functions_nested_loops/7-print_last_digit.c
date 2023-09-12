#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the number to be printed from
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar((n % 10) + '0');
	return (n % 10);
}
