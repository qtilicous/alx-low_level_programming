#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	/* Allocate memory for the new node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	/* Set the data for the new node */
	newNode->n = n;
	newNode->next = NULL;

	/* If the list is empty, the new node is also the head */
	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	/* Traverse to the end of the list */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Update pointers for the new node */
	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}

