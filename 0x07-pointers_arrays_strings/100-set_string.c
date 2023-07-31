#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to the pointer to char to be updated.
 * @to: Pointer to the char to be assigned.
 *
 * This function updates the value of the pointer @s to point to the same
 * char as the pointer @to points to.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

