#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - adds text_content end of filename.
 *
 * @filename: name of file.
 *
 * @text_content: text will add at the end of filename.
 *
 * Return: 1 if success, otherwise 0.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";
	fd = open(filename, O_RDWR | O_APPEND);
	w = write(fd, text_content, strlen(text_content));
	if (fd == -1 || w == -1)
		return (-1);
	return (1);
}
