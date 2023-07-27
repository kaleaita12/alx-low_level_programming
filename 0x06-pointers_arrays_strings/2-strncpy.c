#include "main.h"

/**
 * _strncpy - Write a function that copies a string, with number of bytes
 * @dest: This is the output dest
 * @src: This is the input source
 * @n: This is the number of bytes to copy
 *
 *Return: Copied string with the number of bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
        int index = 0, count = 0;

        while (src[index++])
                count++;
        for (index = 0; index < n && src[index]; index++)
                dest[index] = src[index];

        for (index = count; index < n; index++)
                dest[index] = '\0';

        return (dest);
}
