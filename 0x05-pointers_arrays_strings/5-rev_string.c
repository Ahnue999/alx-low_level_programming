#include "main.h"

/**
 * rev_string - prints a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int count = 0, i,  j;
	int temp;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		i++;
	}

	for (i = 0, j = count; i < count / 2; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}

}
