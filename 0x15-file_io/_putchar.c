#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: the charater to print
 * Return: 1 on succes
 * Onerror: -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

