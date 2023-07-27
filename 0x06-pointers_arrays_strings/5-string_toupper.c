#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters of a
 * string to uppercase.
 *
 * @hi: This is the input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *str)
{
        int index = 0;

        while (str[index])
        {
                if (str[index] >= 'a' && str[index] <= 'z')
                str[index] -= 32;
                index++;
        }
        return (str);
}
