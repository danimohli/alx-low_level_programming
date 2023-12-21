#include "main.h"
/**
 * print_most_numbers - print num 0 - 9 without 2&4
 * Return: void function
 */
void print_most_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		if (n != 2 && n != 4)
			_putchar(n);
		n++;
	}
	_putchar('\n');
}
