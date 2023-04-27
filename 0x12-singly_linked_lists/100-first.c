#include <stdio.h>

/**
 * before_main - Prints a message before the main function is executed
 *
 * Description: This function uses the __attribute__ constructor
 * to specify that it should be executed before the main function.
 * It prints two lines of text using printf.
 */

void __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
