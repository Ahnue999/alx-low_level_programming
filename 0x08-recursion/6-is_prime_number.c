#include "main.h"

int prime(int n, int counter);

/**
 * is_prime_number - tells wheither a number is prime or not
 * @n: the number
 * Return: 1 if prime and 0 if not
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return prime(n, 2)
}


/**
 * prime - checks
 * @n: the number
 * Return: 1 if prime and 0 if not
 */
int prime(int n, int counter)
{
	if (n % counter == 0)
	{
		if (n == counter)
			return (1);
		return (0);
	}
	return (n, counter + 1);
}
