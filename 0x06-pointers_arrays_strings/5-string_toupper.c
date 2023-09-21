#include "main.h"

/**
  * string_toupper - change every lower-case letter to an upper-case
  * @c: the char to change
  * Return: void
  */
char *string_toupper(char *c)
{
	int length, i;

	length = 0;
	while (c[length] != '\n')
		length++;

	for (i = 0; i < length; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
			c[i] -= 32;
	}
	return (c);
}
