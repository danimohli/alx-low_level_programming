#include <stdio.h>
/**
 * main - starting point for other function
 * Return: 0 on successful
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
		putchar('0' + i++);
	putchar('\n');
	return (0);
}
