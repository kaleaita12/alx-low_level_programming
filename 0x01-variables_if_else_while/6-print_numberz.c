#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 *        with out char 
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

        int x;

        for (x = 0; x < 10; x++)
        	putchar((x % 10) + '0');
        
        putchar ('\n');
        
	return (0);
}
