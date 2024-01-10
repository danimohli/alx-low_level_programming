#include "main.h"
/**
 * _puts_recursion - similar to puts function of stdio.h file
 * @s: point to string
 * Return: void function
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		s++;
		_puts_recursion (s);
	}

}
