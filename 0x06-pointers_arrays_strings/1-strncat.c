#include "main.h"
/**
 * _strncat - Concatenates two strings up to n bytes
 *
 * @dest: The destination string
 * @src: The source string to be concatenated
 * @n: The maximum number of bytes to be copied from @src
 *
 * Return: Pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		i++;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
