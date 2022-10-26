#include "main.h"

/**
*_strncat - concatenates two strings with at most n bytes from src
*@dest: first string
*@src: second string
*Return: a pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j, length;

	for (length = 0; dest[length] != '\0'; length++)
	{
	}
	
	for (i, j= 0; src[j] != '\0' && i < n; i++, j++)
	{
		dest[length + i] = src[j];
	}

	dest[length + i] = '\0';

	return (dest);
}
