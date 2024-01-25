#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - print string with seperato
 * @n: len of arguments
 * @separator: seperator
 * Return: void function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *y;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(args, char *);
		if (y != NULL)
			printf("%s", y);
		else
			printf("(nil)");

		if (separator != NULL && x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
