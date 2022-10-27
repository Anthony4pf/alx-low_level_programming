#include "main.h"

/**
*_strcmp - Compare two strings and return a value after comparison
*@s1: first string
*@s2: second string
*Return: Negative if the numbers
*/

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;

		s2++;
	}

	if (s1 != s2)
		res = *s1 - *s2;

	return (res);
}
