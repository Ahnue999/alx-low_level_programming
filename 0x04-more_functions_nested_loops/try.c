#include <stdio.h>

void print_triangle(int size)
{
	int i, j, k;
	
	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
		{
			putchar(' ');
		}
		for (k = 0; k < i; k++) 
		{
			putchar('#');
		}
		putchar('\n');
	}
}

int main()
{
	print_triangle(8);

	return (0);
}
