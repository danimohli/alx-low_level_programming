#include <stdio.h>
/**
 * main - starting point
 * Return: 0 on Successful
 */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	for (b = 'A'; b <= 'Z'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
