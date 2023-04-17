#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the name, age, and owner fields of a
 * struct dog, formatted as shown in the example below. If any of the fields
 * NULL, it prints (nil) instead. If d is NULL, it does nothing.
 *
 * Example:
 *   Name: Poppy
 *   Age: 3.500000
 *   Owner: Bob
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
	}
}
