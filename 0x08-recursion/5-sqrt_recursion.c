#include "main.h"

int _pow(int n, int counter);

/**
 * _sqrt_recursion - return the sqrt of a number
 * @n: the number
 * Return: n factorial
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (0);
	return (_pow(n, 2));
}

/**
 * _pow - return the sqrt of a number
 * @n : the number
 * @count: counter
 * Return: n factorial
 */
int _pow(int n, int counter)
{
	if (counter % (n / counter) == 0)
	{
		if (counter * (n / counter) == n)
			return (counter);
		else
			return (-1);
	}
	return (_pow(n, counter + 1));
}
