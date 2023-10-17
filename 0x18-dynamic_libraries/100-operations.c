#include <stdio.h>

/**
 * add - adds two integers together
 * @a: first integer
 * @b: second integer
 * Return: the result of a and b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - substracts two integers
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - multiply a with b
 * @a: The initial integer to be multiplied
 * @b: The amount to be multiplied
 * Return: result
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - divide b with a
 * @a: The initial amount to be divided
 * @b: The amount to be divided
 * Return: result
 */
int div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero\n");
			return (0);
	}
}

/**
 * mod - find the remaider of a with b
 * @a: The initial amount
 * @b: The amount to be divided to get remainder
 * Return: result or 0 if no remainder
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		fprintf(stderr, "Error: Modulus by zero\n");
			return (0);
	}
}

