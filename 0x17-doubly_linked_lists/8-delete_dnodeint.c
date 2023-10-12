#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to the pointer to the head of the list.
 * @index: The index of the node to be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;

	free(temp);

	return (1);
}

