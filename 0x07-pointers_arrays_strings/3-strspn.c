#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string
 * @accept: the accepted bytes of prefix
 * Return: the pointer to the first occurance
 */
unsigned int _strspn(char *s, char *accept)
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
			{
				count++;
				break;
			}
			if (j - 1 == length)
				return (count);
		}
		i++;
	}
	return (count);
}
