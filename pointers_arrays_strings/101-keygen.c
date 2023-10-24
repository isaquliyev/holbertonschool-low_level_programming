#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char s[34];
        char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
        int n, i = 0;
        srand(time(NULL));
        while (i != 33)
        {
                n = rand() - RAND_MAX / 2;
                if (n < 0){
                    n = n + 1;
                    n = -1 * n;
                }
                *(s + i) = *(c + (n % 52));
                i++;
        }
        *(s + 33) = '\0';
        puts(s);
        return (0);
}
