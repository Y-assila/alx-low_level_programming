#include <stdio.h>
#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long integer to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_len = 0;

	while ((n >> bit_len) > 0)
		bit_len++;

	if (bit_len > 0)
		bit_len--;

	while (bit_len >= 0)
	{
		if ((n & (mask << bit_len)) == 0)
			putchar('0');
		else
			putchar('1');

		bit_len--;
	}
}
