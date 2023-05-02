#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint_safe - Frees a linked list while handling possible loops
 * @h: Pointer to the head of the linked list
 * Return: Size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tortoise, *hare;
	size_t count = 0;

	if (!h)
		return (0);

	tortoise = *h;
	hare = (*h)->next;

	while (hare && hare < hare->next && hare > tortoise)
	{
		free(tortoise);
		count++;
		tortoise = hare;
		hare = hare->next;
		if (hare)
			hare = hare->next;
	}

	free(tortoise);
	count++;

	if (hare && hare >= tortoise)
	{
		hare = tortoise->next;
		while (hare != tortoise)
		{
			tortoise = hare;
			hare = hare->next;
			free(tortoise);
			count++;
		}
		free(tortoise);
		count++;
	}
	else
	{
		while (tortoise->next)
		{
			tortoise = tortoise->next;
			free(tortoise);
			count++;
		}
	}

	*h = NULL;
	return (count);
}
