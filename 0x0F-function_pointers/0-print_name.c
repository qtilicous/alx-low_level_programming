#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

void print_name(char *name, void (*f)(char *));

/**
 * print_name - Prints a name using the provided function.
 * @name: Name of the person.
 * @f: Pointer to a function that prints the name in a specific way.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

/* Function to print a string using custom putchar function */
void custom_putchar(char c);

/* Custom implementation of putchar */
void custom_putchar(char c)
{
	write(1, &c, 1);
}

