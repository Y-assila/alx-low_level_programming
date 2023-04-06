#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Returns the length of a string.
 * @s: The string to get the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * _is_palindrome_helper - Helper function for is_palindrome.
 * @s: The string to check.
 * @start: The start index.
 * @end: The end index.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (*(s + start) == *(s + end))
		return (_is_palindrome_helper(s, start + 1, end - 1));
	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);

	return (_is_palindrome_helper(s, 0, len - 1));
}
