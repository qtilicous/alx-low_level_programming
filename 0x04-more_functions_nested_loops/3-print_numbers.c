#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9 followed by a new line.
 *
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0'); /* Convert the number to its ASCII character */
	}

	_putchar('\n'); /* Print a new line after printing the numbers */
}
