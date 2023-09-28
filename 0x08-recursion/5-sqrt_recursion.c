#include "main.h"

/**
 * _sqrt_recursion - return the sqrt of a number
 * @n: the number
 * Return: n factorial
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (-1)
	if (n == 0)
		return (1)
	if (n == 1)
		return (pow(n, 2));
}

/**
 * pow - return the sqrt of a number
 * @n : the number
 * @count: counter
 * Return: n factorial
 */
int pow(int n, int counter)
{
	if (counter % (n / counter) == 0)
	{
		if (counter * (n / counter) == n)
			return (counter);
		else
			return (-1);
	}
	return (pow(n, c + 1));
}
