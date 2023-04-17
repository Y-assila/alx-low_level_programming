#include "dog.h"
#include <stddef.h>
/**
 * init_dog - Initializes a dog struct
 * @d: Pointer to the dog struct
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog's owner
 *
 * Description: This function initializes a dog struct with the provided
 * name, age, and owner values.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
