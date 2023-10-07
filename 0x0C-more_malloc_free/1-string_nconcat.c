#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
  * _strlen - finds the length of a string
  * @s: the string
  * Return: its length
  */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
		i++;

	return (i);
}
		
/**
  * string_nconcat - concatenates two strings
  * @s1: the first string
  * @s2: the second string
  * @n: the number of byte to concatenate from s2
  * Return: a pointer to the new string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, length1, length2, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);
	if (n >= length2)
		n = length2;

	length = length1 + n;

	p = malloc(sizeof(char) * length);

	if (p == NULL)
		exit(98);

	for (i = j = 0; i < length1; i++, j++)
		*(p + j) = *(s1 + i);

	for (i = 0; i < n; i++, j++)
		*(p + j) = *(s2 + i);

	*(p + j) = '\0';

	return (p);
}
