#include <stddef.h>

/**
 * _strspn - Calculates the length of a string
 * @s: The string to be checked
 * @accept: The string containing characters to match
 * Return: The number of characters of @s consisting only of characters @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0')
	{
		char *temp = accept;

		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				count++;
				break;
			}

			temp++;
		}

		if (*temp == '\0')
		{
			break;
		}

		s++;
	}

	return (count);
}

