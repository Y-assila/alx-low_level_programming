#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints the given name.
 *
 * @name: The name to print.
 * @f: A function pointer that takes a string argument and returns void.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
