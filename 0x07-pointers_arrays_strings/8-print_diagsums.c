#include <stdio.h>

/**
 * print_diagsums - Calculates and prints the sum of the two diagonals
 * @a: A pointer to the square matrix.
 * @size: The size of the square matrix.
 *
 * function calculates the sum of the main diagonal and the secondary diagonal
 * of the square matrix and prints the results separated by a comma.
 */
void print_diagsums(int *a, int size)
{
	int i, main_sum = 0, secondary_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_sum += a[i * size + i];
		secondary_sum += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", main_sum, secondary_sum);
}

