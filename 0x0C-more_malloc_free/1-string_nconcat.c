#include "main.h"
/**
 * string_nconcat - concatenates tow strings
 * @s1: string one
 * @s2: string two
 * @n: string 2 number of word two concatenate
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ss;
	unsigned int i = 0, j = 0, k, t;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (j < n)
		n = j;
	k = i + n + 1;
	ss = malloc(k);
	if (!ss)
		return (NULL);
	for (t = 0; t < i; t++)
	{
		ss[t] = s1[t];
	}
	for (i = 0; i < n; i++)
	{
		ss[t] = s2[i];
		t++;
	}
	ss[t] = '\0';
	return (ss);
}
