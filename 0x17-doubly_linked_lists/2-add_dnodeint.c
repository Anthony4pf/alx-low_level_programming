#include "lists.h"

/**
*add_dnodeint - add a new node at the beginning of a doubly list
*@head: address of head node of the list
*@n: data of new node
*Return: address of new element
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;

	temp = *head;

	temp->prev = ptr;
	ptr->next = temp;
	*head = ptr;

	free (temp);
	return (*head);
} 
