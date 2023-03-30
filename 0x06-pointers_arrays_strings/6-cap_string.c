#include "main.h"
/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: The string to be modified
 *
 * Return: A pointer to the modified string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
				s[i] == ',' || s[i] == ';' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' || s[i] == '"' ||
				s[i] == '(' || s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 'a' + 'A';
			}
		}
	}

	return (s);
}
