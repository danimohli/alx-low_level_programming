#include "main.h"
/**
 * print_numbers - print 0 - 9
 * Return: void function
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
		_putchar(n++ + '0');

	_putchar('\n');
}
