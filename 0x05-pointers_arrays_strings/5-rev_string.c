#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
        char tmp;
        int len = 0, len1 = 0;

        while (s[len1++])
                len++;

        for (len1 = len - 1; len1 >= len / 2; len1--)
        {
                tmp = s[len1];
                s[len1] = s[len - len1 - 1];
                s[len - len1 - 1] = tmp;
        }
}
