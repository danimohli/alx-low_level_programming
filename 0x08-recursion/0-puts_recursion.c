#include "main.h"
/**
 * _puts_recursion - similar to puts function of stdio.h file
 * @s: point to string
 * Return: void function
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
