#include "main.h"

/**
*_isalpha - check for alphabets using their ascii values
*@c: the character checked
*
*Return: Always 0 (success)
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
