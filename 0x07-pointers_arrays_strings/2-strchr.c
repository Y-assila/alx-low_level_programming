#include <stddef.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the string to search in
 * @c: character to search for
 *
 * Return: pointer to the first occurrence of the character c in the string
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
