#include "main.h"
#include <stdio.h>
/**
 * print_triangle - Prints a triangle made of "#" characters of the given size
 * @size: The size of the triangle to print
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
