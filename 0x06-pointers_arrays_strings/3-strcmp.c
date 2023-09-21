#include "main.h"

/**
  * _strcmp - compares to strings
  * @s1: the first string
  * @s1: the second string
  * Return: 1 if the same and 0 otherwise
  */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = j = 0;

	while (s1[i] != '\0')
		i++;

	for (; j < i; j++)
	{
		if (s1[j] < s2[j])
			return (-15);
		else if (s1[j] > s2[j])
			return (15);
	}
	return (0);
}
