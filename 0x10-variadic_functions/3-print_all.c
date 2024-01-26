#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_all - print all values wiht 1 function
 * @format: string character
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
		if (format[x] == 'c')
		{
			c = (char) va_arg(args, int);
			printf("%c\n", c);
		}
		else if (format[x] == 'i' || format[x] == 'f' || format[x] == 's')
		{
			if (format[x] == 'i')
			{
				num = va_arg(args, int);
				printf("%d\n", num);
			}
			else if (format[x] == 'f')
			{
				floa = (float) va_arg(args, double);
				printf("%f\n", floa);
			}
			else if (format[x] == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)\n");
				else if (str != NULL)
					printf("%s\n", str);
			}
		}
		x++;
	}
	va_end(args);
	printf("\n");
}
