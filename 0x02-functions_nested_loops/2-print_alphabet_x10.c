#include <stdio.h>
/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times
 *                       by a new line.
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		putchar('\n');
	}
}
