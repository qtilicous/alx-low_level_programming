#include <stdio.h>

/**
 * _puts - prints a string to the standard output
 * @s: the string to be printed
 */
void _puts(char *s)
{
	if (s != NULL)
	{
		while (*s != '\0')
		{
			putchar(*s);
			s++;
		}

		putchar('\n');
	}
}

