#include "main.h"
/**
 * void print_alphabet_x10 - Function name
 *
 * function that print a to z 10x
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch, chr;

	for (ch = 'a'; ch <= 'j'; ch++)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
			_putchar(chr);
		_putchar('\n');
	}
}
