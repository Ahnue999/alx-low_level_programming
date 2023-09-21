#include "main.h"

/**
  * leet - incode a string into 1337
  * @s: the string to be incoded
  * Return: the rusulting string
  */
char *leet(char *s)
{
	int length = 0, i;
	int chars[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int nums[] = {'4', '3', '0', '7', '1'};

	while (s[length] != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (s[length] == chars[i])
				s[length] = nums[i / 2];
		}
		length++;
	}

	return (s);
}
