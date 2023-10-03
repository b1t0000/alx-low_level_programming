#include "main.h"
/**
 * create_array - create array
 * @size: size of array
 * @c: initialize array char
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ch;

	if (size <= 0)
		return (NULL);
	ch = malloc(size);
	if (ch == NULL)
	{
		free(ch);
		return (NULL);
	}
	while (i < size)
	{
		ch[i] = c;
		i++;
	}
	return (ch);
}

