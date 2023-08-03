#include "main.h"

/**
 * wildcmp_helper - Helper function to compare two strings recursively.
 *
 * @s1: Pointer to the first input string.
 * @s2: Pointer to the second input string.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp_helper(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0')
			return (1);
		if (*s2 == '*')
			return (wildcmp_helper(s1, s2 + 1));
		return (0);
	}

	if (*s2 == '\0')
		return (0);

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp_helper(s1, s2 + 1));
		else if (*(s2 + 1) == '\0')
			return (1);

		if (wildcmp_helper(s1, s2 + 1))
			return (1);
		return (wildcmp_helper(s1 + 1, s2));
	}

	if (*s1 == *s2)
		return (wildcmp_helper(s1 + 1, s2 + 1));

	return (0);
}

/**
 * wildcmp - Compares two strings and checks if they can be identical.
 *
 * @s1: Pointer to the first input string.
 * @s2: Pointer to the second input string.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	return (wildcmp_helper(s1, s2));
}

