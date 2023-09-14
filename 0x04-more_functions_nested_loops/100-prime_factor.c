#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int i, a, b;

	a = 612852475143 / 2;

	for (i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			b = i;
		}
	}
	printf("%ld\n", b);

	return (0);
}
