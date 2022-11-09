#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*str_concat - concatenate two strings
*@s1: First String
*@s2: Second String
*Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int length, i, j, k, limit;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	;

	for (j = 0; s2[j]; j++)
	;

	length = i + j;

	str = malloc(sizeof(char) * (length + 1));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		str[k] = s1[k];


	limit = j;
	for (j = 0; j <= limit; k++, j++)
		str[k] = s2[j];

	return (str);
}
