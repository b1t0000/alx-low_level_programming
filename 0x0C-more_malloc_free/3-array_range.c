#include "main.h"
/**
 * array_range - array range
 * @min: min value
 * @max: max value
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, x;

	if (min > max)
		return (NULL);
	x = max - min + 1;
	arr = malloc(sizeof(int) * x);
	if (!arr)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
