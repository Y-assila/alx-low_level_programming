#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: pointer to the string to print
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
