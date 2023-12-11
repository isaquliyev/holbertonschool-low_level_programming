#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
	int fd;

	fd = open("Requiesca", O_EXCL);
	printf("%d", fd);
}
