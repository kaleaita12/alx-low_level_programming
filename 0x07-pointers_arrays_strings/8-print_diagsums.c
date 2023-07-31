#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - print additions of the two diagonals.
 * @a: source matrix
 * @size: size NxN of matrix
 *
 * Return: chessboard.
 */
void print_diagsums(int *a, int size)
{
        int i, j, sumdiag1 = 0, sumdiag2 = 0;

        for (i = 0; i <= (size * size); i = i + size + 1)
                sumdiag1 = sumdiag1 + a[i];

        for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
                sumdiag2 = sumdiag2 + a[j];
        printf("%d, %d\n", sumdiag1, sumdiag2);
}
