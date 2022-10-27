#include "main.h"
#include <string.h>

/**
*_strncat - concatenates two strings with at most n bytes from src
*@dest: first string
*@src: second string
*@n: number
*Return: a pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int length, i;

	length = strlen(dest)

	for (i = 0; i < n && src[i]; src++, i++)
	{
		dest[length + i] = src[i];
	}

		dest[length + i] = '\0';

		return (dest);
}
