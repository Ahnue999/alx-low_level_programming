#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  * @s: the string
  * Return: length of the string
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - checks
 * @s: the string
 * @length: the string length
 * @counter: counter
 * Return: 1 if prime and 0 if not
 */
int palindrome(char *s, int length, int counter)
{
	if (counter >= length)
		return (1);
	if (*(s + counter) != *(s + length - counter))
		return (0);
	return (palindrome(s, length, counter + 1));
}

/**
 * is_palindrome - tells wheither a string is palindrome or not
 * @s: the string
 * Return: 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen_recursion(s) - 1;

	return (palindrome(s, length, 0));
}
