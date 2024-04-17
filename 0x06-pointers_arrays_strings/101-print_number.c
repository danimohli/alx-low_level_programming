#include "main.h"
#include <limits.h>

/**
 * print_number - function to print number
 * @n: number to print
 */
void print_number(int n)
{
	unsigned int m;
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	m = n;
		if (m / 10 > 0)
			print_number(m / 10);
	_putchar(m % 10 + '0');
}
