#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - Prints a linked list while handling possible loops
 * @head: Pointer to the head of the linked list
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t count = 0;

	if (!head)
		exit(98);

	tortoise = head;
	hare = head->next;

	while (hare && hare < hare->next && hare > tortoise)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		tortoise = tortoise->next;
		hare = hare->next;
		if (hare)
			hare = hare->next;
	}

	printf("[%p] %d\n", (void *)tortoise, tortoise->n);
	count++;

	if (hare && hare >= tortoise)
	{
		printf("-> [%p] %d\n", (void *)tortoise->next, tortoise->next->n);
		count++;
		tortoise = tortoise->next;
		while (hare != tortoise)
		{
			printf("[%p] %d\n", (void *)tortoise, tortoise->n);
			count++;
			tortoise = tortoise->next;
		}
	}
	else
	{
		while (tortoise->next)
		{
			printf("[%p] %d\n", (void *)tortoise->next, tortoise->next->n);
			count++;
			tortoise = tortoise->next;
		}
	}

	return (count);
}
