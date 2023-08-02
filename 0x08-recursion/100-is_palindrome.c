#include "main.h"
#include <stdio.h>

/**
 * palind2 - obtains length of a
 * @a: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind2(char *a)
{
	if (*a == '\0')
		return (0);
	else
		return (1 + palind2(a + 1));
}
/**
 * palind3 - compares string vs string reverse
 * @a: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int palind3(char *a, int l, int n)
{
	if (*(a + l) == *(a + n))
	{
		if (l == n || l == n + 1)
		return (1);
	return (0 + palind3(a, l + 1, n - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palind3(s, 0, palind2(s) - 1));
}
