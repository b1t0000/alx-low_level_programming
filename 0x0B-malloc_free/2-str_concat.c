#include "main.h"
#include <stdio.h>
/**
 * str_concat - concatenates string
 * @s1: string one
 * @s2: string two
 * Return: NULL or Pointer
 */
char *str_concat(char *s1, char *s2)
{
	int l, m, i = 0, j = 0, k = 0;
	char *con;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1)
	{
		while (s1[i])
			i++;
	}
	if (s2)
	{
		while (s2[j])
			j++;
	}
	k = i + j + 1;
	con = malloc(sizeof(char) * k);
	if (con == NULL)
	{
		free(con);
		return (NULL);
	}
	for (l = 0; l < i; l++)
		con[l] = s1[l];
	for (m = 0; m < j; m++)
	{
		con[l] = s2[m];
		l++;
	}
	return (con);
}
