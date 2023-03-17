#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print alphabets lowercase'
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
