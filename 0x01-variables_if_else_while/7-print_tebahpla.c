#include <stdio.h>
/**
 * main - starting point
 * Return: 0 on Successful
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
