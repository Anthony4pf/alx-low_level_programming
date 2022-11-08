#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strdup - returns a pointer to a newly allocated memory
*@str: string to be copied
*Return: pointer
*/

char *_strdup(char *str)
{
	unsigned int i, j;
	char *string;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	;

	string = (char *)malloc(sizeof(char) * i + 1);

	if (string == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
		string[j] = str[j];

	return (string);
}
