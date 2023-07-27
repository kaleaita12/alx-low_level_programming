#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
        int t, i;

        for (i = n - 1; i >= n / 2; i--)
        {
                t = a[n - 1 - i];
                a[n - 1 - i] = a[i];
                a[i] = t;
        }
}
