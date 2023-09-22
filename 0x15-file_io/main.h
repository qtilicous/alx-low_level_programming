#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(int code, const char *message, const char *file);
int main(int argc, char *argv[]);
int open_file(const char *file, int flags);
void close_file(int fd, const char *filename);
void copy_file(int s_fd, int d_fd);

#endif
