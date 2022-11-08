#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*create_array - create an array
*@size: number of elements of the array
*@c: the specific character in the array
*Return: pointer
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *str = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	else if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
