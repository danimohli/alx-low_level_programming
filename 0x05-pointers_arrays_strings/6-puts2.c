#include <string.h>
#include "main.h"
/**
 * puts2 - half words printed
 * @str: pointer to string
 * Return: void function
 */
void puts2(char *str)
{
	int len = strlen(str), x = 0;

	while (x < len)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
