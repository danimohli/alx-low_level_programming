#include "main.h"
/**
 * print_last_digit - print last value of a num
 *
 * @n: num to evaluate
 * Return: last value of N;
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n *= -1;
	x = n % 10;

	_putchar('0' + x);
	return (x);
}
