#include <stdio.h>
/**
 * main - starting point of c function
 *
 * outputing without using any man 3 functions
 *
 * Return: 1 on successful
 */
int main(void)
{
	char *ptr = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	while (*ptr != '\0')
		putchar(*ptr++);
	putchar('\n');
	return (1);
}
