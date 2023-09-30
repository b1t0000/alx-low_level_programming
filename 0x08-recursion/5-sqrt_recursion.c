#include "main.h"
/**
 * root - find root
 * @n: number
 * @i: integer
 * Return: root
 */
int root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i >= n)
		return (-1);
	return (root(n, i + 1));
}
/**
 * _sqrt_recursion - square root of a number
 * @n: number
 * Return: root;
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	return (root(n, i));
}
