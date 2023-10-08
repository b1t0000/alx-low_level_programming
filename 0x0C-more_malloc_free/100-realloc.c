#include "main.h"
/**
 * _realloc - rellocat memory
 * @ptr: old memory pointer
 * @old_size: size of memory
 * @new_size: size of memory
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new, *old;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);
	new = malloc(new_size);
	old = ptr;
	if (!new)
		return (NULL);
	if (!ptr)
		return (new);
	if (new_size > old_size)
		new_size = old_size;
	for (i = 0; i < new_size; i++)
	{
		new[i] = old[i];
	}
	free(ptr);
	return (new);
}

