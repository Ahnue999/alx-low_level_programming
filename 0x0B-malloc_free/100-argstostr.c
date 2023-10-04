#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates arguments
 * @ac: argument count
 * @av: argument vector
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, length, wlength;
	int current;
	char *conc;

	length = wlength = current = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		length = length + strlen(av[i]) + 1;
	}
	length++;

	conc = (char *)malloc(sizeof(char) * length);

	if (conc == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		wlength = strlen(av[i]);
		for (j = 0; j < wlength; j++, current++)
		{
			conc[current] = av[i][j];
		}
		conc[current] = '\n';
		current++;
	}
	conc[current] = '\0';

	return (conc);
}
