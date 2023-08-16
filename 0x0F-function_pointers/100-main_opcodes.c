#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of pointers to the command-line arguments.
 *
 * Return: 0 if successful, an error code otherwise.
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes <= 0)
	{
		printf("Error\n");
		return (2);
	}

	char cmd[50];

	sprintf(cmd, "objdump -d -j .text -M intel %s | grep -A %d 'main:'", argv[0], num_bytes);

	system(cmd);

	return (0);
}

