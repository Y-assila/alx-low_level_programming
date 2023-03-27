#include "main.h"
#include <unistd.h>
/**
 * puts2 - prints every other character of a string, starting with the first character.
 * @str: pointer to a string.
 *
 * Return: void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		write(STDOUT_FILENO, &str[i], 1);

	write(STDOUT_FILENO, "\n", 1);
}
