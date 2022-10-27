#include "main.h"

/**
*_strncpy - copy at most n bytes of src to dest
*@dest: destination string
*@src: source string
*@n: Maximum bytes of src to be copied
*Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
