#include "main.h"

/**
 * cap_string - capitalize every word in a string
 * @c: the string to capitalize
 * Return: the string after capitalization
 */
char *cap_string(char *c)
{
	int length, i;
	int state;

	state = 0;
	length = 0;
	while (c[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		if (state)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
				c[i] -= 32;
			state = 0;
		}
		if (c[i] == ' ' || c[i] == '\t' || c[i] == '\n' || c[i] ==  ',')
			state = 1;
		else if (c[i] ==  ';' || c[i] ==  '.' || c[i] ==  '!')
			state = 1;
		else if (c[i] ==  '"' || c[i] ==  '(' || c[i] ==  ')')
			state = 1;
		else if (c[i] ==  '?'  || c[i] ==  '{' || c[i] ==  '}')
			state = 1;
	}
	return (c);
}
