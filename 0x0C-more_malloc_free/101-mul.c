#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the length of a string
 * @s: string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	int len1, len2, len_res, i, j, res, carry;
	int *mul_res;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);

	for (i = 0; i < len1; i++)
	{
		if (!_isdigit(argv[1][i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	for (i = 0; i < len2; i++)
	{
		if (!_isdigit(argv[2][i]))
		{
			printf("Error\n");
			return (98);
		}
	}

	len_res = len1 + len2;
	mul_res = calloc(len_res, sizeof(*mul_res));

	if (!mul_res)
		return (98);

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			res = (argv[1][i] - '0') * (argv[2][j] - '0') + carry + mul_res[i + j + 1];
			mul_res[i + j + 1] = res % 10;
			carry = res / 10;
		}
		mul_res[i + j + 1] += carry;
	}

	i = 0;
	while (mul_res[i] == 0 && i < len_res - 1)
		i++;

	for (; i < len_res; i++)
		printf("%d", mul_res[i]);

	printf("\n");

	free(mul_res);

	return (0);
}

