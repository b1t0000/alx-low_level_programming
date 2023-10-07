#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: size of memory
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	char *me;

	me = malloc(b);
	if (me == NULL)
	{
		exit(98);
	}
	return (me);
}
