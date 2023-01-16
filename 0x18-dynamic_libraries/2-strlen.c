#include "main.h"

/**
*_strlen - Return the length of a string
*@s: string to be counted
*Return: Length of the entered string
*/

int _strlen(char *s)
{
	int i;
	int length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}

	return (length);
}
