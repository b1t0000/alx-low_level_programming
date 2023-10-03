#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int j, i = 1, sum = 0;
	char c;

	while (i < argc)
	{
		j = atoi(argv[i]);
		if (j == 0)
		{
			c = *argv[i];
			if (c == 45 || c != 48)
			{
				if (*argv[i + 1] != 48)
				{
					printf("Error\n");
					return (0);
				}
			}
		}
		sum += j;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
