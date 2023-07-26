#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase.
 * @str: The input string to convert.
 *
 * Return: String.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			/* Convert lowercase letters to uppercase */
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}

