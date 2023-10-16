#include <unistd.h>

/**
 * _islower - checks id character c is a lowercase letter
 * @c: the character to be checked
 * Return: 1 if true. 0 if false
 */
int _islower(int c);
{
	return (c >= 'a' && c <= 'z');
}

