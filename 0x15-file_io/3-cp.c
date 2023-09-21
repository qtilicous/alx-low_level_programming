#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <errno.h>

#define BUF_SIZE 1024

void error_exit(int code, const char *message);
int open_file(const char *filename, int flags, const char *file_desc)
int copy_file(int fd_from, int fd_to, const char *src, const char *dest);
int close_files(int fd1, int fd2);

/**
 * main - entry point of the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to");
	}

	const char *file_from = argv[1];
	const char *file_to = argv[2];

	int fd_from, fd_to;

	fd_from = open_file(file_from, O_RDONLY, file_from);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (!copy_file(fd_from, fd_to, file_from, file_to))
	{
		close_files(fd_from, fd_to);
		error_exit(99, "Error: Can't write to file");
	}

	if (close_files(fd_from, fd_to) == -1)
	{
		exit(100);
	}

	return (0);
}

/**
 * error_exit - exits the program with the given exit code and prints an error
 * @code: The exit code to use
 * @message: The error message to print
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 * open_file - opens a file with the specified flags and permissions
 * @filename: the name of the file to open
 * @flags: the flags to use when opening the file
 * @file_desc: a description of the file (for error messages)
 * Return: the file descriptor on success, or -1 on failure
 */
int open_file(const char *filename, int flags, const char *file_desc)
{
	int fd = open(filename, flags, 0664);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", file_desc);

	return (fd);
}

/**
 * copy_file - copies the content of one file to another
 * @fd_from: the source file descriptor
 * @fd_to: the destination file descriptor
 * @src: the name of the source file (for error messages)
 * @dest: the name of the destination file (for error messages)
 * Return: 1 on success, or 0 on failure
 */
int copy_file(int fd_from, int fd_to, const char *src, const char *dest)
{
	char buffer[BUF_SIZE];
	ssize_t n_read, n_written;

	while ((n_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);

		if (n_written == -1 || n_written != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			return (0);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		return (0);
	}

	return (1);
}

/**
 * close_files - closes two file descriptors
 * @fd1: the first file descriptor to close
 * @fd2: the second file descriptor to close
 * Return: 0 on success, or -1 on failure
 */
int close_files(int fd1, int fd2)
{
	int ret = 0;

	if (close(fd1) == -1 || close(fd2) == -1)
	{
		int fd_to_close = (close(fd1) == -1) ? fd1 : fd2;

		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to_close);
		ret = -1;
	}

	return (ret);
}

