#include "main.h"

int check_divisor(int n, int i);

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (check_divisor(n, 2));
}

/**
 * check_divisor - checks whether n has a divisor from i upward
 * @n: the number to check
 * @i: the current divisor
 *
 * Return: 1 if no divisor is found, otherwise 0
 */
int check_divisor(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_divisor(n, i + 1));
}
