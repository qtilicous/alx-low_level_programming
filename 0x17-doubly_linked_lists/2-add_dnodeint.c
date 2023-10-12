#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: A pointer to the pointer to the head of the doubly linked list.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	/* Allocate memory for the new node */
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	/* Set the data for the new node */
	newNode->n = n;
	newNode->prev = NULL;

	/* Update pointers */
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	/* Update the head to point to the new node */
	*head = newNode;

	return (newNode);
}

