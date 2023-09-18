#include "main.h"

/**
  * print_array - prints a string
  * @a: the array
  * @n: the num
  * Return: void
  */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n + 1; i++)
	{
		_putchar(*(a + i));
	}
	_putchar('\n');
}
