#include "main.h"
/**
 * argstostr - concatenates all the arguments
 * @ac: number of argument
 * @av: arguments
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *argstr;
	int i, k = 0, j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			k++;
	}
	k += ac;
	argstr = malloc(sizeof(char) * k);
	if (argstr == NULL)
	{
		free(argstr);
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0 ; av[i][j]; j++)
		{
			argstr[k] = av[i][j];
			k++;
		}
		argstr[k] = '\n';
		k++;
	}
	return (argstr);
}
