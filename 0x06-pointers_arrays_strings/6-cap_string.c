#include <stdbool.h> /* Include the standard library for bool type */

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string to capitalize.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int i;
	bool capitalize_next = true; /* the next letter should be capitalized */

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
				str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' ||
				str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' ||
				str[i] == '{' || str[i] == '}')
				{
					capitalize_next = true; /* Set flag, capitalize */
				}
		else if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			/* Capitalize the letter if the flag is set and it is a lowercase letter */
			str[i] = str[i] - ('a' - 'A');
			capitalize_next = false; /* Reset the flag after capitalizing the letter */
		}
	}

	return (str);
}

