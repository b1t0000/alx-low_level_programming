#include "main.h"
/**
 * _calloc - calloc using malloc
 * @nmemb: meebers number
 * @size: size of one member
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal, c;
	unsigned int i, s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = nmemb * size;
	c = 0;
	cal = malloc(s);
	if (!cal)
		return (NULL);
	for (i = 0; i < s; i++)
		cal[i] = c;
	return (cal);
}
