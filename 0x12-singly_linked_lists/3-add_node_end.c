#include "lists.h"

/**
*add_node_end - add a new node at the end of the list
*@head: double pointer to the head node of a list
*@str: string
*Return: new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	size_t length = 0;

	if (str == NULL)
		return (NULL);

	length = strlen(str);

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = length;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;

	return (temp);
}
