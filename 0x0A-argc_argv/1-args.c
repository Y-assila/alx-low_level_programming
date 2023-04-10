#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of command-line arguments passed to it
 * @argc: the number of arguments
 * @argv: an array of pointers to the arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
