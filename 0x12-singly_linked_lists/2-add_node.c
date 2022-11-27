#include "lists.h"

/**
*add_node - add a new node at the beginning of a list
*@head: a double pointer to the head of list
*@str: string
*Return: new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp = NULL;
	size_t length = 0;

	length = strlen(str);
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->len = length;
	temp->str = strdup(str);
	temp->next = NULL;

	temp->next = *head;
	*head = temp;

	return (*head);
}
