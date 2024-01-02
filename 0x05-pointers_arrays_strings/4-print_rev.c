#include "main.h"
/**
 * print_rev - print string from last to begginning
 * @s: string to print
 * Return: void function
 */
void print_rev(char *s)
{
	int len = 0, loop;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	len -= 1;

	for (loop = 0; loop <= len; len--)
		_putchar(s[len]);
	_putchar('\n');
}
