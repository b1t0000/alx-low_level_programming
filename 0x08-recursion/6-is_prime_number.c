#include "main.h"
/**
 * prime - check prime number or not
 * @n: number
 * @i: integer
 * Return: 1 or 0;
 */
int prime(int n, int i)
{
	if (n % i == 0 && i < n)
		return (0);
	if (n == i)
		return (1);
	return (prime(n, i + 1));
}
/**
 * is_prime_number - is it a prime number
 * @n: number
 * Return: 0 or 1;
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (prime(n, i));
}
