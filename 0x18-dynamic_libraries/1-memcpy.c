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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
