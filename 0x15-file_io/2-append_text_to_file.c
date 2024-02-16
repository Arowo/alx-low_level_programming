#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - append text to a file
 * @filename: file name
 * @text_content: text content
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int write_file, len = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	write_file = write(fd, text_content, len);
	if (write_file < 0)
		return (-1);
	close(fd);
	return (1);
}
