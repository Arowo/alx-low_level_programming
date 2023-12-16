#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
	int fd;
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fd = open("/dev/stderr", O_WRONLY);
	write(fd, quote, strlen(quote));
	close(fd);

	return (1);
}
