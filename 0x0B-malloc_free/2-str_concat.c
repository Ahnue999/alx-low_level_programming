#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the first string
 * Return: a pointer to the first char of the string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, length;



	length = strlen(s1) + strlen(s2) + 1;

	p = (char *)malloc(sizeof(char) * (length));

	if (p == NULL)
		return ('\0');

	i = j = 0;
	while (*(s1 + i) != '\0')
	{
		*(p + j) = *(s1 + i);
		i++;
		j++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		*(p + j) = *(s2 + i);
		i++;
		j++;
	}

	*(p + j) = '\0';

	return (p);
}

