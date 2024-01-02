#include "main.h"
#include <string.h>
/**
 * print_rev - print string from last to begginning
 * @s: string to print
 * Return: void function
 */
void print_rev(char *s)
{
	int len = strlen(s);

	len = len - 1;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar(s[len]);
	_putchar('\n');
}
