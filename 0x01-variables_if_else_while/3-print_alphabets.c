#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always (Success)
 *
 */

int main(void)
{
        int i = 'a';
        int j = 'A';
        while ( i <= 'z')
        {
                putchar (i);
                i++ ;
        }
        while ( j<= 'Z')
        {
                putchar (j);
                j++ ;
        }
        putchar ('\n');
        return (0);
}

