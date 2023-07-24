#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every second character of a string.
 * @str: input string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}

	putchar('\n');
}

