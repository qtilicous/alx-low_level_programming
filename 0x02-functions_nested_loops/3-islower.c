#include "main.h"

/*
 *  _islower - check if char is lowercase
 * @c: is the char to be checked
 * Returns 1 if c is lowercase
 * Returns 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

