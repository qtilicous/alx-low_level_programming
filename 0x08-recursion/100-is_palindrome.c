#include "main.h"

/**
 * _strlen - Returns the length of a string.
 *
 * @s: Pointer to the input string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome
 *
 * @s: Pointer to the input string.
 * @start: The starting index of the current substring.
 * @end: The ending index of the current substring.
 *
 * Return: 1 if the substring is a palindrome, otherwise 0.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: Pointer to the input string.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (is_palindrome_helper(s, 0, len - 1));
}

