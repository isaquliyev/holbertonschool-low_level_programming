#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
        char s[15];
        char *c = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ0123456789";
        int n, i = 0, valid = 1, size = 0;

        srand(time(0));
        while (i != 8)
        {
                n = rand() - RAND_MAX / 2;
                if (n < 0){
                    n = n + 1;
                    n = -1 * n;
                }
                *(s + i) = *(c + (n % 62));
                i++;
        }
        *(s + 8) = '1';
        *(s + 9) = 'a';
        *(s + 10) = '\0';
        puts(s);
        return (0);
}
