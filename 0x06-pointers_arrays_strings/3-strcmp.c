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
	{
			if (s1[i] < s2[i])
				return (-15);
			else if (s1[i] > s2[i])
				return (15);
		i++;
	}
	return (0);
}
