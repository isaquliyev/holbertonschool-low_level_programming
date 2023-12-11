#include <limits.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>

/**
 * read_textfile - prints a number of letters from given file.
 *
 * @filename: the name of given file.
 *
 * @letters: number of letters must be printed from file.
 *
 * Return: a number of chars it could be read and print
 * if open, read or write fails, then return 0.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf = malloc(letters);

	if (!filename || !buf)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);
	if (fd == -1 || r == -1 || w == -1 || w != r)
		return (0);
	close(fd);
	return (w);
}
