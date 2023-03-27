#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by a new line.
 *
 * @a: pointer to the array of integers.
 * @n: number of elements of the array to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	if (a != NULL)
	{
		for (int i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
				printf(", ");
		}
		printf("\n");
	}
}
