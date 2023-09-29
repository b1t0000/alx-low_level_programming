#include "main.h"
/**
 * _pow_recursion - x raised to the power of y
 * @x: base
 * @y: power
 * Return: the powr
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	if (y > 1)
	{
		x = x * _pow_recursion(x, y - 1);
	}
	return (x);
}
