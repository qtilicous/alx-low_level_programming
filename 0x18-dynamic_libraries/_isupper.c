#include <unistd.h>

/**
 * _isupper - checks the character c is an uppercase letter
 * @c: the character to be checked
 * Return: 1 if true, 0 if false or otherwise
 */
int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

