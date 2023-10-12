#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - print strings
 * @separator: separator
 * @n: number of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *x;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, char *);
		if (x == NULL)
			printf("(nil)");
		else
			printf("%s", x);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}