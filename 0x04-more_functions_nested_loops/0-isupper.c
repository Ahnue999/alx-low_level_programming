#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: the number to be checked
 *
 * Return: void
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
