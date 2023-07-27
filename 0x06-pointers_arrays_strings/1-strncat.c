#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings. it will use at
 *            most n bytes from src
 *
 * @dest: This is the output  dest
 * @src: This is the input src
 * @n: This is the number bytes fro src
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
        int index = 0, count = 0;

        while (dest[index++])
                count++;

        for (index = 0; src[index] && index < n; index++)
        dest[count++] = src[index];
        return (dest);
}
