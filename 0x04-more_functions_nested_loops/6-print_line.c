#include "main.h"
/**
 * print_line  - print line
 * Return: void function
 */
void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (m = 0; m < n; m++)
			_putchar('_');
		_putchar('\n');
	}
}
