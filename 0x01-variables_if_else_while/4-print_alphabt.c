#include <stdio.h>

/**
  * main - Entry Point
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 113 || i == 101)
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
