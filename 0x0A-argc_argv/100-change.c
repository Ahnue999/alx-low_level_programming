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

	while (coins != 0)
	{
		if (coins >= 25)
			coins -= 25;
		else if (coins >= 10)
			coins -= 10;
		else if (coins >= 5)
			coins -= 5;
		else if (coins >= 2)
			coins -= 2;
		else if (coins >= 1)
			coins -= 1;
		change++;
	}

	printf("%d\n", change);

	return (0);
}
