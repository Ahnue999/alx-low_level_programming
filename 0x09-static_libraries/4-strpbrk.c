#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string
 * @accept: the string to find
 * Return: the pointer to the first occurance
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, length;
	unsigned int count;

	length = 0;
	while (accept[length] != '\0')
		length++;

	i = count = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < length; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
		i++;
	}
	return ('\0');
}
