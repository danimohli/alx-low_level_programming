#include "main.h"
/**
 * print_square - print square
 * @size: size of square
 * Return: void function
 */
void print_square(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (n = 0; n < size; n++)
	{
		for (m = 0; m < size; m++)
			_putchar('#');
		_putchar('\n');
	}
}
