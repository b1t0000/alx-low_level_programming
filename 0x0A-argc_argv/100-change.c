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
	int cent, coins = 0;
	int c, cc, ccc, cccc;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	c = cent % 25;
	coins = cent / 25;
	cc = c % 10;
	coins += c / 10;
	ccc = cc % 5;
	coins += cc / 5;
	cccc = ccc % 2;
	coins += ccc / 2;
	coins += cccc;
	printf("%d\n", coins);
	return (0);
}
