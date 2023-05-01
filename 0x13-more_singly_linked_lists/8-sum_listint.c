#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - computes the sum of all the data (n) of a listint_t linked
 * @head: pointer to the head node of the list
 *
 * Return: the sum of all the data in the list, or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
