#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * @n: the first unsigned long integer
 * @m: the second unsigned long integer
 *
 * Return: the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count += (x & 1);
		x >>= 1;
	}

	return (count);
}
