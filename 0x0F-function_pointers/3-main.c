#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	(*get_op_func(argv[2]))(x, y);
	return (0);
}
