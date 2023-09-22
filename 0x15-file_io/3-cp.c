#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * open_file - Opens a file and handles errors.
 * @file: The name of the file to open.
 * @flags: The flags for opening the file.
 * Return: The file descriptor on success, or -1 on failure.
 */
int open_file(const char *file, int flags)
{
	int fd;

	fd = open(file, flags, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file);
		exit(98);
	}

	return (fd);
}

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 * @filename: The name of the file (used for error message).
 */
void close_file(int fd, const char *filename)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd);
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %s\n", filename);
		exit(100);
	}
}

/**
 * copy_file - Copies the content of one file to another.
 * @s_fd: Source file descriptor.
 * @d_fd: Destination file descriptor.
 */
void copy_file(int s_fd, int d_fd)
{
	char buffer[BUFFER_SIZE];
	int rd_status, wr_status;

	while ((rd_status = read(s_fd, buffer, BUFFER_SIZE)) > 0)
	{
		wr_status = write(d_fd, buffer, rd_status);
		if (wr_status == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE %d\n", d_fd);
			exit(99);
		}
	}

	if (rd_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE %d\n", s_fd);
		exit(98);
	}
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, various exit codes on failure
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to %s\n", argv[0]);
		exit(97);
	}

	fd_from = open_file(argv[1], O_RDONLY);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC);

	copy_file(fd_from, fd_to);

	close_file(fd_from, argv[1]);
	close_file(fd_to, argv[2]);

	return (0);
}

