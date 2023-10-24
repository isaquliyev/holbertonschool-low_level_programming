#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (n);
}
