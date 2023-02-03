#include "hash_tables.h"

/**
*hash_table_set - adds an element to the hash table.
*@ht: pointer to the hash table
*@key: key of the element
*@value: value of the element
*Return: 1 if it succeeded, 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head = NULL, *node = NULL;

	if (ht == NULL || *key == '\n' || *value == '\n')
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	/*If key exists, replace value*/
	while (node != NULL)
	{
		if (strcmp(key, node->key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	if (ht->array[index] != NULL)
	{
		head = ht->array[index];
		node->next = head;
		head = node;
		ht->array[index] = node;
		return (1);
	}
	if (ht->array[index] == NULL)
	{
			ht->array[index] = node;
			return (1);
	}
	return (0);
}
