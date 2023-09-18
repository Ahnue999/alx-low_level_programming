#include "main.h"

/**
  * puts2 - returns the length of a string
  * @str: the string
  * Return: void
  */
void puts2(char *str)
{
	int i = 0, j;

	while (*(s + i) != '\0')
		i++;
	i--;

	for (j = 0; j < i; j + 2)
		_putchar(s[j]);
}
