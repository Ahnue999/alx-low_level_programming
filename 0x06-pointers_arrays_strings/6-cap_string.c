#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @c: the string to capitalize
 * Return: the string after capitalization
 */
char *cap_string(char *c)
{
	int length, i = 0;
	int delim[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


	if (c[i] >= 'a' && c[i] <= 'z')
		c[i] -= 32;

	length = 0;
	while (c[length] != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (c[length] == delim[i])
			{
				if (c[length + 1] >= 'a' && c[length + 1] <= 'z')
					c[length + 1] -= 32;
				break;
			}
		}
		length++;
	}
	return (c);
}
