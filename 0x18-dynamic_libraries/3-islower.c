#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the number to be checked
 *
 * Return: void
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
