#include "main.h"

int find_sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the natural square root, or -1 if n has none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (find_sqrt(n, 0));
}

/**
 * find_sqrt - tries every candidate from i upward
 * @n: the number
 * @i: the current candidate
 *
 * Return: the natural square root, or -1 if n has none
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (find_sqrt(n, i + 1));
}
