#include "main.h"
/**
 * _memset - fill memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: the constant byte to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area `s`
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}

	return (s);
}
