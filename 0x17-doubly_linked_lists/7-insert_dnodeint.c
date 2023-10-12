#include "lists.h"
#include <stdlib.h>

/**
 * create_node - Creates a new node with the given data.
 * @n: The data to be stored in the new node.
 *
 * Return: A pointer to the new node.
 */
dlistint_t *create_node(int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode != NULL)
	{
		newNode->n = n;
		newNode->prev = NULL;
		newNode->next = NULL;
	}
	return (newNode);
}

/**
 * insert_at_beginning - Inserts a new node at the beginning of the list.
 * @head: A pointer to the pointer to the head of the list.
 * @newNode: A pointer to the new node.
 */
void insert_at_beginning(dlistint_t **head, dlistint_t *newNode)
{
	newNode->next = *head;
	if (*head != NULL)
		(*head)->prev = newNode;
	*head = newNode;
}

/**
 * insert_at_index - Inserts a new node at a given index.
 * @temp: A pointer to the node before the desired index.
 * @newNode: A pointer to the new node.
 */
void insert_at_index(dlistint_t *temp, dlistint_t *newNode)
{
	newNode->prev = temp;
	newNode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = newNode;
	temp->next = newNode;
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: A pointer to the pointer to the head of the list.
 * @idx: The index of the list where the new node should be added.
 * @n: The data to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int i = 0;

	newNode = create_node(n);
	if (newNode == NULL)
		return (NULL);

	if (idx == 0)
	{
		insert_at_beginning(h, newNode);
		return (newNode);
	}

	temp = *h;
	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	insert_at_index(temp, newNode);

	return (newNode);
}

