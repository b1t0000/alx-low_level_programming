#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - print in format
 * @format: format
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *x;
	int i = 0;

	va_start(args, format);
	if (format)
	{
		while (format[i] != '\0')
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					x = va_arg(args, char *);
					if (x == NULL)
						x = "(nil)";
					printf("%s", x);
					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1] != '\0')
				printf(", ");
			i++;
		}
		printf("\n");
	}
	va_end(args);
}
