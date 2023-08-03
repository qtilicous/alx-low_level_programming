#include "main.h"

/**
 * is_prime_helper - Helper function to check if a number is prime
 *
 * @n: The number to be checked for prime.
 * @i: The current divisor to check for prime.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_helper(int n, int i)
{
	if (n <= 1)
		return (0);

	if (i == n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if an input integer is a prime number.
 *
 * @n: The number to be checked for prime.
 *
 * Return: 1 if the number is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

