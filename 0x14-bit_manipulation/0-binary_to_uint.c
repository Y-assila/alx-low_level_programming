#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number represented as a string
 * @b: Pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint_val = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			uint_val = uint_val << 1;
		}
		else if (b[i] == '1')
		{
			uint_val = (uint_val << 1) | 1;
		}
		else
		{
			return (0);
		}
	}

	return (uint_val);
}
