#include "main.h"
#include <unistd.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to a string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;

	for (i = n; i < len; i++)
		write(STDOUT_FILENO, &str[i], 1);

	write(STDOUT_FILENO, "\n", 1);
}
