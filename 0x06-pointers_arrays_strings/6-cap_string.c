#include "main.h"

/**
*cap_string - capitalizes all words of a string including the first word
*@s: string.
*Return: string.
*/

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{

		if ((s[i - 1] == ' ' || s[i - 1] == '\n'

		|| s[i - 1] == '\t' || s[i - 1] == ','

		|| s[i - 1] == ';' || s[i - 1] == '!'

		|| s[i - 1] == '?' || s[i - 1] == '"'

		|| s[i - 1] == '(' || s[i - 1] == ')'

		|| s[i - 1] == '{' || s[i - 1] == '}'

		|| s[i - 1] == '.')

		&& (s[i] >= 'a' && s[i] <= 'z'))
		{

			s[i] = s[i] - 32;

		}

		else if ((s[0] >= 97 && s[0] <= 122))
		{
			s[0] = s[0] - 32;
		}

		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
