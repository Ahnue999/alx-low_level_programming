#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10
		printf("Last digit of %d is ", last_digit);
	if (last_digit > 5)
		printf("and is greater than 5\n");
	if (last_digit == 0)
		printf("and is zero\n");
	if (last_digit < 6 && last_digit != 0)
		printf("and is less than 6 and not 0\n");

	return (0);
}
