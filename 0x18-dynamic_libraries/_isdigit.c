#include <unistd.h>

/**
 * _isdigit - checks if the character c is a digit between 0-9.
 * @c: the character to be checked
 * Return: 1 if condition is true, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

