#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: pointer to a string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int len = 0;
	int i, j;
	char tmp;

	while (s[len] != '\0')
		len++;

	j = len - 1;

	for (i = 0; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
