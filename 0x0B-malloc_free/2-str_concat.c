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
	int i, length;

	length = strlen(s1) + strlen(s2);

	p = (char *)malloc(sizeof(char) * (length));

	if (p == NULL)
		return ('\0');

	i = 0;
	while (*(s1 + i) != '\0')
		*(p + i) = *(s1 + i);
	i = 0;
	while (*(s2 + i) != '\0')
		*(p + i) = *(s2 + i);

	*(p + i) = '\0';

	return (p);
}

