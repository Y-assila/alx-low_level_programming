#include "main.h"
/**
 * _strlen - calculate the length of a string
 * @s: pointer to the first character of the string
 *
 * Return: the number of characters in the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
