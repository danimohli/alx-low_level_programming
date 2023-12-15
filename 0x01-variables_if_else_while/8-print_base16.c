#include <stdio.h>
/**
 * main - main function
 * Return: 0 on successful
 */
int main(void)
{
	int i;
	char c;

	i = 0;
	c = 'a';

	while (i <= 9)
		putchar('0' + i++);

	while (c <= 'f')
		putchar(c++);
	putchar('\n');
	return (0);
}
