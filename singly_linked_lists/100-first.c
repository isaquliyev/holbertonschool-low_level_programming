#include <stdio.h>

void tartoise (void) __attribute__ ((constructor));

void tartoise(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
