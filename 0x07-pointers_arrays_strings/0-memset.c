#include "main.h"

/**
*_memset - Fill a memory with a constant byte
*@s: string
*@b: constant byte
*@n: index
*Return: *s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
