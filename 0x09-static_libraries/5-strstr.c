#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds the first occurrence of a substring in a string.
 * @haystack: The main string to be searched.
 * @needle: The substring to be searched in the main string.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*haystack == *n && *n != '\0' && *haystack != '\0')
		{
			haystack++;
			n++;
		}

		if (*n == '\0')
			return (h);

		haystack = h + 1;
	}

	return (NULL);
}
