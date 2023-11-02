#include "hash_tables.h"

/**
 * shash_table_create - Create a sorted hash table
 * @size: Size of the array
 * Return: A pointer to the newly created sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	sht = malloc(sizeof(shash_table_t));

	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);

	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}

	sht->shead = NULL;
	sht->stail = NULL;

	for (i = 0; i < size; i++)
		sht->array[i] = NULL;

	return (sht);
}

/**
 * shash_table_set - Add an element to the sorted hash table
 * @ht: The sorted hash table
 * @key: The key
 * @value: The value to be associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}

	new_node = malloc(sizeof(shash_node_t));

	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL || strcmp(ht->shead->key, key) > 0)
	{
		new_node->snext = ht->shead;
		new_node->sprev = NULL;

		if (ht->shead)
			ht->shead->sprev = new_node;

		else
			ht->stail = new_node;
		ht->shead = new_node;
	}
	else
	{
		current = ht->shead;
		while (current->snext != NULL && strcmp(current->snext->key, key) < 0)
			current = current->snext;

		new_node->snext = current->snext;
		new_node->sprev = current;

		if (current->snext)
			current->snext->sprev = new_node;

		else
			ht->stail = new_node;
		current->snext = new_node;
	}

	return (1);
}

