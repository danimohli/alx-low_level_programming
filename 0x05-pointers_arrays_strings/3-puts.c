#include "main.h"
/**
 * _puts - print string with newline
 * @str: pointer string
 * Return: void function
 */
void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
