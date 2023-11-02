#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * add_node - Add a new node to the hash table.
 * @ht: The hash table.
 * @key: The key to add.
 * @value: The value to associate with the key.
 *
 * Return: The new node if successful, NULL on failure.
 */
hash_node_t *add_node(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	index = key_index((unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));

	if (new_node)
	{
		new_node->key = strdup(key);
		new_node->value = strdup(value);

		if (new_node->key && new_node->value)
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
			return (new_node);
		}
		free(new_node->key);
		free(new_node->value);
		free(new_node);
	}
	return (NULL);
}

/**
 * hash_table_set - Add an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	current = ht->array[key_index((unsigned char *)key, ht->size)];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);

			if (current->value)
				return (1);
			return (0);
		}
		current = current->next;
	}

	return (add_node(ht, key, value) ? 1 : 0);
}

