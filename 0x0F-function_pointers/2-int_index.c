#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of aryay
 * @cmp: poointer to function
 * Return: -1, index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, x;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	while (i < size)
	{
		x = cmp(array[i]);
		if (x != 0)
			return (i);
		i++;
	}
	return (-1);
}

