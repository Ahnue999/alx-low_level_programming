#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long int prev = 1;
	long int n = 1;
	long int tmp = 1;
	long int sum = 0;

	for (i = 0; i < 32; i++)
	{
		if (n % 2 == 0)
			sum += n;
		tmp = n;
		n += prev;
		prev = tmp;
	}
	printf("%ld\n", sum);

	return (0);
}
