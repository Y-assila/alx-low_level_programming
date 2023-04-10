#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there was an error
 */
int main(int argc, char *argv[])
{
	int cents, num_coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	{
		int quarters = cents / 25;
		cents %= 25;
		num_coins += quarters;
	}

	{
		int dimes = cents / 10;
		cents %= 10;
		num_coins += dimes;
	}

	{
		int nickels = cents / 5;
		cents %= 5;
		num_coins += nickels;
	}

	{
		int twos = cents / 2;
		cents %= 2;
		num_coins += twos;
	}

	 num_coins += cents;

	 printf("%d\n", num_coins);
	 return (0);
}
