#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to the head of the linked list
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL, *current_node = *head, *next_node;

	while (current_node)
	{
		next_node = current_node->next;
		current_node->next = prev_node;
		prev_node = current_node;
		current_node = next_node;
	}

	*head = prev_node;

	return (*head);
}
