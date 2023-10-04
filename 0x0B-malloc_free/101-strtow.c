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

	while(s[i])
	{
		if (is_word && s[i] != ' ')
		{
			Wcount++;
			is_word = 0;
		}
		else if (s[i] == ' ')
			is_word = 1;
		i++;
	}
	return (Wcount);
}

/**
 * s - extract a word from a string
 * @str: the string to extract from
 * Return: a word
 */
char *extract_word(char *str)
{
	int i, length = 0;
	char *newstr;

	if (str == NULL)
	{
		printf("ERROR !!");
		return (NULL);
	}

	i = 0;
	while (str[i] != ' ' || str[i] != '\0')
	{
		length++;
		i++;
	}

	newstr = (char *)malloc(sizeof(char) * length + 20);

	if (newstr == NULL)
	{
		printf("ERROR\n");
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		newstr[i] = str[i];
	}

	newstr[i] = '\0';

	return (newstr);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: an array that contains the words
 */
char **strtow(char *str)
{
	int i, j, w, Wcount, length;
	char *aword;
	char **words;
	int state = 1;

	if (str == NULL)
		return (NULL);

	aword = (char *)malloc(sizeof(char) * 20);

	Wcount = word_count(str);

	words = (char **)malloc(sizeof(char *) * Wcount + 1);

	if (words == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	i = j = w = length = 0;
	while (str[i] != '\0')
	{
		if (state && str[i] != ' ')
		{
			strcpy(aword, extract_word(str + i));
			length = strlen(aword);

			words[i] = (char *)malloc(sizeof(char) * length + 1);

			j = 0;
			while(aword[j] != '\0')
			{
				words[w][j] = aword[j];
				j++;
			}
			words[w][j] = '\0';
			w++;
			i += length;
			state = 0;
		}
		if (str[i] != ' ')
		{
			state = 1;
		}
		i++;
	}
	words[w] = NULL;
	return (words);
}
