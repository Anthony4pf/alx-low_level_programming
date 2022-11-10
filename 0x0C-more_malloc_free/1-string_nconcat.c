#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*string_nconcat - concatenate two strings
*@s1: destination string
*@s2: source string
*@n: size
*Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strout;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
	;
	for (j = 0; j < n; j++)
	;

	strout = malloc(sizeof(char) * (i + j + 1));

	if (strout == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		strout[i] = s1[i];

	for (j = 0; j < n; j++, i++)
		strout[i] = s2[j];

	strout[i] = '\0';

	return (strout);
}
