#include "main.h"

/**
  * puts2 - returns the length of a string
  * @str: the string
  * Return: void
  */
void puts2(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
		i++;
	i--;

	for (j = 0; j < i; j = j + 2)
		_putchar(str[j]);
	_putchar('\n');
}
