#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * checksum - executes checksum
 * @s: input char
 * Return: checksum
 */
int checksum(char *s)
{
int sum = 0;
while (*s != 0)
{
	sum += *s;
	s++;
}
return (sum);
}
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
        char s[33];
        char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
        int i = 0, valid = 0;
        unsigned int sum;

        srand(time(NULL));
        while (valid == 0){
        while (i != 33)
        {
                *(s + i) = *(c + (rand() % (sizeof(c) - 1)));
                i++;
        }
        *(s + 33) = '\0';
        sum = checksum(s);
		if (sum == 2772)
		{
			valid = 1;
			printf("%s", s);
		}
		i = 0;
        }
        return(0);
}
