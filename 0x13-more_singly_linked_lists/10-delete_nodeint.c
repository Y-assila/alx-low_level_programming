#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given position
 * @head: Pointer to the head of the linked list
 * @index: Index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	for (i = 0; i < index && current_node; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}

	if (!current_node)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}
