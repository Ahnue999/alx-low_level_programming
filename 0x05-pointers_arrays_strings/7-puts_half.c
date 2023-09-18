#include "main.h"

/**
  * puts2 - returns the length of a string
  * @str: the string
  * Return: void
  */
void puts2(char *str)
{
	int length = 0, j;

	while (*(str + length) != '\0')
		length++;

	for (j = length / 2; j < length; j++)
		_putchar(str[j]);
	_putchar('\n');
}
