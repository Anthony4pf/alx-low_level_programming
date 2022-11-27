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
	size_t length;

	temp = malloc(sizeof(list_t));
	length = strlen(str);

	temp->len = length;
	temp->str = strdup(str);
	temp->next = NULL;

	temp->next = *head;
	*head = temp;

	return (*head);
}
