/* File: 1-isdigit.c */

/**
 * _isdigit - Checks if a character is a digit (0 through 9).
 * @c: The character to be checked.
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	/* Check if the character is within the ASCII range of digits */
	/* ASCII range for digits: '0' (48) to '9' (57) */
	return ((c >= '0' && c <= '9') ? 1 : 0);
}

