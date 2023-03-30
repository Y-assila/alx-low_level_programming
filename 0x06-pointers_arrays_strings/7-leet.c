#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * leet - encodes a string into 1337.
 *
 * @str: the input string to encode.
 *
 * Return: a newly allocated string with the encoded result.
 */
char *leet(char *str)
{
	char *encoded;
	int i, j;

	encoded = malloc(sizeof(char) * (strlen(str) + 1));
	if (!encoded)
		return (NULL);

	for (i = 0, j = 0; str[i]; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			encoded[j++] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			encoded[j++] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			encoded[j++] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			encoded[j++] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			encoded[j++] = '1';
		else
			encoded[j++] = str[i];
	}
	encoded[j] = '\0';

	return (encoded);
}
