#include <unistd.h>

/**
 * _isalpha - checks if the character c is an alphabetic character
 * @c: the character to be checked
 * Return: 1 if true, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

