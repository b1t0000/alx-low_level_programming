#include <stdio.h>
/**
 * main - main function
 * @argc: number of argument
 * @argv: array of arguments
 * Return: 0 succes
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc > i)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
