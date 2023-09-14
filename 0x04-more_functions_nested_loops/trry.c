#include <stdio.h>

void more_numbers(void);

int main()
{
	more_numbers();

	return (0);
}

void more_numbers(void)
{
	int i, j;
	int a, b;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			a = i / 10;
			b = i % 10;
			if (a < 1)
			{
				putchar(b + '0');
			}
			else
			{
				putchar(a + '0');
				putchar(b + '0');
			}
		}
		putchar('\n');
	}
}
