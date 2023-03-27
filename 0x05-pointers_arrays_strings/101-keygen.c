#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate random valid passwords for the program 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	const char charset[] =
		"0123456789"
		"abcdefghijklmnopqrstuvwxyz"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	const int charset_size = sizeof(charset) - 1;
	const int password_length = 10;

	srand(time(NULL));

	printf("Generating valid passwords for 101-crackme:\n");

	for (int i = 0; i < 10; i++)
	{
		char password[password_length + 1];

		for (int j = 0; j < password_length; j++)
		{
			password[j] = charset[rand() % charset_size];
		}
		password[password_length] = '\0';

		printf("%s\n", password);
	}

	return 0;
}
