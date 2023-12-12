#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#define BUFFER_SIZE 1024

/**
 * copier - copy the content of first argument to another.
 *
 * @file_from: source file.
 *
 * @file_to: destination file.
 */

void copier(const char *file_from, const char *file_to)
{
	int fd, fd2, r = 1, w, c;
	char *buf = malloc(BUFFER_SIZE);

	fd2 = open(file_from, O_RDONLY);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	umask(0);
	fd = open(file_to, O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while (r > 0)
	{
		r = read(fd2, buf, BUFFER_SIZE);
		w = write(fd, buf, r);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
		if (fd == -1 || w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
	}
	c = close(fd);
	if (c == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd), exit(100);
	free(buf);
}

/**
 * main - main block.
 *
 * @argc: count of arguments.
 *
 * @argv: argument vector.
 *
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	char *file_from, *file_to;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = argv[1];
	file_to = argv[2];
	copier(file_from, file_to);
	return (0);
}
