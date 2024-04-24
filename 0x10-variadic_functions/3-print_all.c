#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print all values wiht 1 function
 * @format: string char
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int x = 0, num;
	char c, *str;
	float floa;

	va_start(args, format);
	while (format && format[x] != '\0')
	{
		switch (format[x])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				floa = (float) va_arg(args, double);
				printf("%f", floa);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		if (format[x + 1] != '\0' && (format[x] == 's' || format[x] == 'i' ||
					format[x] == 'c' || format[x] == 'f'))
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(args);
}
