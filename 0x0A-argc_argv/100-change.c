#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 when work
 */
int main(int argc, char *argv[])
{
	int coins, change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	coins = atoi(argv[1]);
	if (coins < 0)
		printf("0\n");
	while (coins != 0)
	{
		if (coins >= 25)
		{
			change++;
			coins -= 25;
		}
		else if (coins >= 10)
		{
			change++;
			coins -= 10;
		}
		else if (coins >= 5)
		{
			change++;
			coins -= 5;
		}
		else if (coins >= 2)
		{
			change++;
			coins -= 2;
		}
		else
		{
			change++;
			coins -= 1;
		}
	}
	printf("%d\n", change);
	return (0);
}
