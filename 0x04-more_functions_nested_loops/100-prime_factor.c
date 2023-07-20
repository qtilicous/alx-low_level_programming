#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds and prints the largest number.
 * @n: The number to find the largest prime factor for.
 *
 * Return: The largest prime factor.
 */
long largest_prime_factor(long n)
{
	long factor, largest;

	largest = -1;

	while (n % 2 == 0)
	{
		largest = 2;
		n /= 2;
	}

	for (factor = 3; factor <= sqrt(n); factor += 2)
	{
		while (n % factor == 0)
		{
			largest = factor;
			n /= factor;
		}
	}

	if (n > 2)
		largest = n;

	return (largest);
}

/**
 * main - Entry point, finds and prints the largest number.
 *
 * Return: Always 0.
 */

int main(void)
{
	long num = 612852475143;
	long largest_prime = largest_prime_factor(num);

	printf("%ld\n", largest_prime);
	return (0);
}

