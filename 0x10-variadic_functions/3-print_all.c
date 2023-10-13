#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print in format
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *x, *sp = "";
	int i = 0;

	va_start(args, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(args, int));
					break;
				case 'i':
					printf("%s%i", sp, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(args, double));
					break;
				case 's':
					x = va_arg(args, char *);
					if (x == NULL)
						x = "(nil)";
					printf("%s%s", sp, x);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
		printf("\n");
	}
	va_end(args);
}
