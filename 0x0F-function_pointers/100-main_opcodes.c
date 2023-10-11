#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, mbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	mbytes = atoi(argv[1]);

	if (mbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < mbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != mbytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
