#include "main.h"

/**
  * puts_half - returns the length of a string
  * @str: the string
  * Return: void
  */
void puts_half(char *str)
{
	int length = 0, j;

	while (*(str + length) != '\0')
		length++;

	for (j = length / 2; j < length; j++)
		_putchar(str[j]);
	_putchar('\n');
}
