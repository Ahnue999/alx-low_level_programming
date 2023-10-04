#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * word_count - counts words in a string
  * @s: the string
  * Return: the word count
  */
int word_count(char *s)
{
	int i, Wcount, is_word;

	i = Wcount = 0;
	is_word = 1;

	while(s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			is_word = 1;
		}
		else if (is_word)
		{
			Wcount++;
			is_word = 0;
		}
		i++;
	}
	return (Wcount);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: an array that contains the words
 */
char **strtow(char *str)
{
	int i, c, w, Wcount, length = 0;
	int first, last;
	char *word;
	char **words;

	while (*(str + length))
		length++;

	Wcount = word_count(str);
	if (Wcount == 0)
		return (NULL);

	words = (char **)malloc(sizeof(char *) * Wcount + 1);
	if (words == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	c = w = 0;
	for (i = 0; i < Wcount; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				last = i;
				word = (char *)malloc(sizeof(char) * c + 1);
				if (word == NULL)
					return (NULL);
				while (first < last)
					*word++ = str[first++];
				*word = '\0';
				words[w] = word - c;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			first = i;
		}
	}

	words[w] = NULL;

	return (words);
}
