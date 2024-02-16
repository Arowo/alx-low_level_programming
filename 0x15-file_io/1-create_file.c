#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - create a file with permisions
 * @filename: filename
 * @text_content: text content file
 * Return: return an integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_file;
	char *buffer;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	buffer = text_content;
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);
	write_file = write(fd, buffer, strlen(buffer));
	if (write_file < 0)
		return (-1);
	return (1);
}
