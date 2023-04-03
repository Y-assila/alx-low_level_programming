#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search in
 * @accept: pointer to the set of characters that are allowed
 *
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s != '\0')
	{
		p = accept;
		while (*p != '\0')
		{
			if (*s == *p)
			{
				len++;
				break;
			}
			p++;
		}
		if (*p == '\0')
		{
			return (len);
		}
		s++;
	}
	return (len);
}
