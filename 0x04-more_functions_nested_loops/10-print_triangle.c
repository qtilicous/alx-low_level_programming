#include "main.h"

/**
 * print_triangle - Prints a triangle of size `size` using the character '#'.
 * @size: The size of the triangle to be printed.
 */

void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (spaces = 1; spaces <= size - i; spaces++)
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

