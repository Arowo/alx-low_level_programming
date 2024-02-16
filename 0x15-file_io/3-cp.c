#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * make_buffer - function to create a buffer
 * @file: file input to write to
 * Return: return buffer on su ccess
 */
char *make_buffer(char *file)
{
	char *buffer;
	
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(99);
	}
	printf("Hello world");
	return (buffer);
}

/**
 * close_fd - function to close a file descriptor
 * @fd: file descriptor to close
 */

void close_fd(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - main function
 * @ac: cmd count
 * @av: cmd vector
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int r, w, fd_r, fd_w;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = make_buffer(av[2]);
	fd_r = open(av[1], O_RDONLY);
	r = read(fd_r, buffer, 1024);
	fd_w = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (fd_r == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		w = write(fd_w, buffer, r);
		if (fd_w == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		r = read(fd_r, buffer, 1024);
		fd_w = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_fd(fd_r);
	close_fd(fd_w);
	return (0);
}
