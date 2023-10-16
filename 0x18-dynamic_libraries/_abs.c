#include <unistd.h>

/**
 * _abs - computes the absolute value of a integer
 * @n: the integer for which to compute the absolute value
 * Return: the absolute value of the integer @n
 */
int _abs(int n)
{
	return ((n < 0) ? -n : n);
}

