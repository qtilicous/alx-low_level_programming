#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * @...: The variable number of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	const char *current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format + i;

		if (i > 0)
			printf(", ");

		switch (*current_format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				{
					char *str = va_arg(args, char *);

					if (str == NULL)
						printf("(nil)");
					else
						printf("%s", str);
				}
				break;
			default:
				i++;

				continue;
		}

		i++;
	}

	va_end(args);

	printf("\n");
}

