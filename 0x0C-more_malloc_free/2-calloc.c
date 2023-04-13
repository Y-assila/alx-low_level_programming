#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocate memory for an array and set to zero
 * @nmemb: number of elements to allocate
 * @size: size of each element
 *
 * Return: pointer to allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, nmemb * size);

	return (ptr);
}
