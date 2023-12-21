#include "main.h"
/**
 * print_diagonal - as name say
 * @n: number time to print
 * Return: void function
 */
void print_diagonal(int n)
{
	int m, o;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (o = 1; o <= m; o++)
			{
				if (o < m)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
}
