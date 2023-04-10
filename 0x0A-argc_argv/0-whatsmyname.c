#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("Program name: %s\n", argv[0]);
	printf("Number of arguments: %d\n", argc-1);
	return 0;
}
