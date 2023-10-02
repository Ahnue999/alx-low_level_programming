#include <stdio.h>
#include <stdlib.h>

/**
  * main - main function
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 when work
  */
int main(int argc , char* argv[]) 
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%d\n", a * b);

	return (0);
}
