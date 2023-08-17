#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *seprator = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", seprator, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", seprator, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", seprator, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", seprator, str);
					break;
				default:
					i++;
					continue;
			}
			seprator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
