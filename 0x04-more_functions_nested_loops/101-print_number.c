#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int reverse = 0;
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}

	if (num == 0)
	{
		_putchar('0');
		return;
	}

    /* Reverse the number */
	while (num != 0)
	{
		reverse = reverse * 10 + (num % 10);
		num /= 10;
	}

    /* Print the reversed number */
	while (reverse != 0)
	{
		_putchar((reverse % 10) + '0');
		reverse /= 10;
	}
}

