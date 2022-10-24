#include "main.h"

/**
* *_strcpy - copy the string pointed to by src to dest
*@src: first pointer
*@dest: second pointer
*Return: the pointer copied to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{

	}

	for (i = 0; i <= length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
