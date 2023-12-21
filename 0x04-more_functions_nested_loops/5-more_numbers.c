#include "main.h"
/**
 * more_numbers - print 0 - 14
 * Return: void function
 */
void more_numbers(void)
{
	int x = 0, y;

	while (x <= 9)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				_putchar(y / 10 + '0')
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
		x++;
	}
}
