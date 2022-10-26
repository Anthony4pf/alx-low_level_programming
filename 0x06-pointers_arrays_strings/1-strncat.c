#include "main.h"

/**
*_strncat - concatenates two strings with at most n bytes from src
*@dest: first string
*@src: second string
*Return: a pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	
	for (j = 0; src[j] !- '\0' && n--; j++, i++)
	{
		dest[i] = src[j];
	}

	_putchar('\0');

	return (dest);
}
