#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - check
 * @s: string
 * Return: 1 or 0;
 */
int is_digit(char *s)
{
	if (s[0] == '0')
		return (0);
	else
		return (1);
}
/**
 * main - main function
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int j, i = 1, sum = 0;
	while (i < argc)
	{
		j = atoi(argv[i]);
		if (j == 0)
		{
			if (is_digit(argv[i]))
			{
				printf("Error\n");
				return (0);
			}
		}
		sum += j;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
