#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: the string to find
 * Return: the pointer to the first occurance
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, length;

	length = 0;
	while (needle[length] != '\0')
		length++;

	while (haystack[i] != '\0')
	{
		for (j = 0; j < length; j++)
		{
			if (haystack[i] != needle[j])
				break;
			if (j < length - 1)
				return (haystack - j);
		}
		i++;
	}
	return ('\0');
}
