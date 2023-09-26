#include "main.h"

/**
 * _strchr - finds a char in a string
 * @s: the string
 * @c: the character to find
 * Return: the pointer to the first occurance
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			break;
		}
		i++;
	}

	return (s + i);
}
