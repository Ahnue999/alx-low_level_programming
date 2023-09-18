#include "main.h"

/**
  * print_rev - prints a string
  * @s: the string
  * Return: void
  */
void print_rev(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}

	for (; i - 1 >= 0; i--)
		_putchar(*(s + i));

	_putchar('\n');
}
