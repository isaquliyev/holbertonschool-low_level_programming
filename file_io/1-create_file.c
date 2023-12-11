#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

/**
 * create_file - creates file using given filename and text.
 *
 * @filename: name of file.
 *
 * @text_content: the content of new file.
 *
 * Return: if there are malloc fails, write and file
 * descriptor failures then returns 0, otherwise return 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, i = 0, len;
	char *buf;

	if (!text_content)
		text_content = "";
	len = strlen(text_content);
	buf = malloc(strlen(text_content) + 1);
	if (!filename || !buf)
		return (-1);
	while (*(text_content + i) != '\0')
	{
		*(buf + i) = *(text_content + i);
		i++;
	}
	fd = open(filename, O_EXCL);
	if (fd == 3)
		fd = open(filename, O_TRUNC | O_WRONLY);
	else
		fd = open(filename, O_CREAT | O_WRONLY, 0600);
	w = write(fd, buf, len);
	if (fd == -1 || w == -1)
		return (-1);
	close(fd);
	return (1);
}
