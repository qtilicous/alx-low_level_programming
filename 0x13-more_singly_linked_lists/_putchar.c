#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on succes 1
 * Onerror: -1 is returned on a error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

