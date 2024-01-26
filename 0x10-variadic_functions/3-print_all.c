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
	Arg current_arg;
	va_list args;
	int x = 0;

	va_start(args, format);
	while (format[x] != '\0' && x < 9)
	{
		current_arg.type = format[x];
		switch (current_arg.type)
		{
			case 'c':
				current_arg.value.char_val = (char)va_arg(args, int);
				printf("%c\n", current_arg.value.char_val);
				break;
			case 'i':
				current_arg.value.int_val = va_arg(args, int);
				printf("%d\n", current_arg.value.int_val);
				break;
			case 'f':
				current_arg.value.float_val = (float)va_arg(args, double);
				printf("%f\n", current_arg.value.float_val);
				break;
			case 's':
				current_arg.value.str_val = va_arg(args, char *);
				if (current_arg.value.str_val == NULL)
				{
					printf("(nil)\n");
				}
				else if (current_arg.value.str_val != NULL)
				{
					printf("%s\n", current_arg.value.str_val);
				}
				break;
		}
		x++;
	}
	va_end(args);
	printf("\n");
}
