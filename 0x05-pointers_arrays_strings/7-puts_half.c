#include "main.h"
/**
 * puts_half - half of rest
 * @str: string to pointer
 * Return: void function
 */
void puts_half(char *str)
{
	int x, y, z = 0;

	while (str[z] != '\0')
		z++;
	if (z % 2 == 0)
	{
		y = z / 2 - 1;

		for (x = 0; x <= y; x++)
			_putchar(str[z / 2 + x]);
	}
	else
	{
		y = z / 2 + 1;

		for (x = 1; x < y; x++)
			_putchar(str[z / 2 + x]);
	}
	_putchar('\n');
}
