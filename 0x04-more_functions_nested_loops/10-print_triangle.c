#include "main.h"
/**
 * print_triangle - print tringle
 * @size: size otriangle
 * Return: void function
 */
void print_triangle(int size)
{
	int n, m;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (n = 1; n <= size; n++)
	{
		for (m = 0; m < size; m++)
		{
			if (m < size - n)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
