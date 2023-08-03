#include "main.h"

/**
 * _putchar - Writes a character to the standard output (stdout).
 *
 * @c: The character to be written.
 *
 * Return: On success, the character written is returned.
 *         On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * _print_rev_recursion - Prints a string in reverse.
 *
 * @s: Pointer to the input string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

