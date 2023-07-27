#include "main.h"

/**
 * leet - Write a function that encodes a string into 1337
 *
 * @changed: This is the input string
 *
 * Return: String converted to 1337
 */

char *leet(char *changed)
{
        int index, j;
        char s1[] = "aAeEoOtTlL";
        char s2[] = "4433007711";

        for (index = 0; changed[index] != '\0'; index++)
        {
                for (j = 0; j < 10; j++)
                {
                        if (changed[index] == s1[j])
                        {
                                changed[index] = s2[j];
                        }
                }
        }
        return (changed);
}
