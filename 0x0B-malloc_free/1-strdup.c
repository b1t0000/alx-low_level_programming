#include "main.h"
/**
 * _strdup - copy string in new memory
 * @str: string
 * Return: pointer
 */
char *_strdup(char *str)
{
	int j = 0, i = 0;
	char *new;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\n')
	{
		i++;
	}
	new = malloc(i);
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	while (j < i)
	{
		new[j] = str[j];
		j++;
	}
	return (new);
}
