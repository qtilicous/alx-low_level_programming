#include <unistd.h>

/**
 * _putchar - entry point
 * @c: the charater to be written
 * Return: 1 on success
 * On error: -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
