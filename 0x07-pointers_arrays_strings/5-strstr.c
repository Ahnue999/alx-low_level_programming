#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: the string
 * @needle: the string to find
 * Return: the pointer to the first occurance
 */
char *_strstr(char *haystack, char *needle)
{
	char *ahaystack;
	char *aneedle;

	while (*haystack != '\0')
	{
		ahaystack = haystack;
		aneedle = needle;

		while (*haystack != '\0' && *aneedle != '\0' && *haystack == *aneedle)
		{
			haystack++;
			aneedle++;
		}
		if (!*aneedle)
			return (ahaystack);
		haystack = ahaystack + 1;
	}
	return (0);
}
