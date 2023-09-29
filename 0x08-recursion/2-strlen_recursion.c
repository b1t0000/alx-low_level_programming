#include "main.h"
/**
 * _strlen_recursion - find the length of a strings
 * @s: string
 * Return: the length
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}
