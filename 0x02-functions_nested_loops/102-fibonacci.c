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

	for (i = 0; i < 50; i++)
	{
		if (i < 49)
			printf("%ld, ", n);
		else
			printf("%ld\n", n);
		tmp = n;
		n += prev;
		prev = tmp;
	}

	return (0);
}
