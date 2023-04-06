#include "main.h"
#include <stdio.h>
/**
 * _sqrt_helper - A helper function to calculate the square root of a number
 * @n: The number to calculate the square root of
 * @i: The current guess for the square root
 *
 * Return: The square root of the number, or -1 if it does not have a natural
 * square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Calculates the square root of a number using recursion
 * @n: The number to calculate the square root of
 *
 * Return: The square root of the number, or -1 if it does not have a natural
 * square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}
