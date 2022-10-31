#include "main.h"

/**
*_strchr - Locates a Chraracter in a string
*@s: String
*@c: Chracter to search for in the string
*Return: *s
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
