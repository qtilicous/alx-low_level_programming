#include "main.h"
#include <stdio.h>

/* File: 0-isupper.c */

/**
 * _isupper - Checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if c is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	/*
	 * Check if the character is within the ASCII range of uppercase letters
	 * ASCII range for uppercase letters: 'A' (65) to 'Z' (90)
	 */
	return ((c >= 'A' && c <= 'Z') ? 1 : 0);
}

