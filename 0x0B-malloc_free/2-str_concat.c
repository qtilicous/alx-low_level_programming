#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string (s1 + s2).
 *         It returns NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	/* Calculate the lengths of the input strings */
	while (s1 != NULL && s1[len1] != '\0')
		len1++;
	while (s2 != NULL && s2[len2] != '\0')
		len2++;

	/* Allocate memory for the concatenated string */
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	/* Copy the characters from the string to the concatenated string */
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];

	/* Copy the characters from the second string to the concatenated string */
	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];

	concatenated[i] = '\0'; /* Null-terminate the concatenated string */

	return (concatenated);
}

