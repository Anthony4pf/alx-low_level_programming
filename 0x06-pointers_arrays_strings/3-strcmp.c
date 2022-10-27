#include "main.h"

/**
*_strcmp - Compare two strings and return a value after comparison
*@s1: first string
*@s2: second string
*Return: Negative if the numbers
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
			return (-15);

		else if (s1[i] > s2[i])
			return (15);

		else if (s1[i] == s2[i])
			return (0);

	}
}
