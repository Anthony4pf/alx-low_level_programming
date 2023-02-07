#include "hash_tables.h"

/**
*hash_table_print - prints a hash table in python dict format
*@ht: hash table
*Return: void
*/

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp = NULL;
	unsigned long int i;
	short int comma = 0;

	if (ht == NULL)
		return;

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (comma)
				printf(", ");

			printf("'%s': '%s'", temp->key, temp->value);

			if (comma == 0)
				comma = 1;

			temp = temp->next;
		}
	}
	printf("}\n");
}
