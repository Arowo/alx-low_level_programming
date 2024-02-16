#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reading text from a file
 * @filename: name of the file to read
 * @letters: letter count in the file
 * Return: return operation in the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t file;
	ssize_t read_file;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);
	read_file = read(fd, buffer, letters);
	if (read_file < 0)
	{
		free(buffer);
		return (0);
	}
	file = write(STDOUT_FILENO, buffer, read_file);
	if (file < 0)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (file);
}
