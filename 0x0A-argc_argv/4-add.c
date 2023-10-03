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
		c = *argv[1];
		if (j == 0 && c != 48)
		{
			printf("Error\n");
			return (1);
		}
		sum += j;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
