#include "main.h"

/**
*leet - encodes a string into 1337
*@s: string to encode
*Return: the encoded string
*/

char *leet(char *s)
{
	char str[] = "oOlLeEaAtT";
	char num[] = "0011334477";

	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0, k = 0; str[j] != '\0'; j++)
		{
			if (s[i] == str[j])
			{
				k = j;
				s[i] = num[k];
			}
		}
	}

	return (s);
}
