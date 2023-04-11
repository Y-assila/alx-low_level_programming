#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 *           contains a copy of the string given as a parameter.
 *
 * @str: the string to be duplicated
 *
 * Return: a pointer to the duplicated string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *dup_str;
	int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	dup_str = malloc((len + 1) * sizeof(char));

	if (dup_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);
}
