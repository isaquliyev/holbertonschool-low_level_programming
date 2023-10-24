#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
        char s[33];
        char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
        int n, i = 0;
        srand(time(NULL));
        while (i != 33)
        {
                *(s + i) = *(c + (rand() % (sizeof(c) - 1)));
                i++;
        }
        *(s + 33) = '\0';
        printf("%s",s);
        return(0);
}
