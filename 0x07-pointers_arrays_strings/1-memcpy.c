#include "main.h"

/**
*_memcpy - Copies n bytes of a memory area
*@dest: Destination string
*@src: source string
*@n: index
*Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; dest[j] != '\0'; j++)
		{
			dest[j] = src[j];
		}
	}

	return (dest);
}
