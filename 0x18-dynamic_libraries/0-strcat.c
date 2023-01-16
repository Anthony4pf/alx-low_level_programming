#include "main.h"

/**
*_strcat - Concatenates two strings
*@dest: first string
*@src: second string
*Return: Pointer to Dest
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
	{
	}

	for (j = 0; src[j]; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
