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
	while (format[x] != '\0' && x < 9)
	{
		switch (format[x])
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c\n", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d\n", num);
				break;
			case 'f':
				floa = (float) va_arg(args, double);
				printf("%f\n", floa);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)\n");
					break;
				}
				printf("%s\n", str);
				break;
			default:
				break;
		}
		x++;
	}
	va_end(args);
}
