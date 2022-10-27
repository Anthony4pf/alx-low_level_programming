#include "main.h"

/**
*string_toupper - Convert all the lowercase to uppercase
*@str: String to be converted
*Return: String Converted
*/

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}
	}

	return (str);
}
