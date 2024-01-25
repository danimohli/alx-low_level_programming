#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print number with seperato
 * @n: len of arguments
 * @separator: seperator
 * Return: void function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	int y;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(args, int);
		if (x < n - 1 && separator != NULL)
			printf("%d%s", y, separator);
		else if (x < n - 1)
			printf("%d ", y);
		else
			printf("%d\n", y);
	}
}
