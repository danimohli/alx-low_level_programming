#include "main.h"
/**
 * main - starting point
 *
 * outp _putchar
 *
 * Return: 0 on successful
 */
int main(void)
{
	char *pu = "_putchar";

	while (*pu != '\0')
		_putchar(*pu++);
	_putchar('\n');
	return (0);
}
