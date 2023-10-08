#include "main.h"
/**
 * _calloc - calloc using malloc
 * @nmemb: meebers number
 * @size: size of one member
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *cal;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	cal = malloc(nmemb * size);
	if (!cal)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		cal[i] ='0';
	return (cal);
}
