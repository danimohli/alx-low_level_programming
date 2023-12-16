#include <stdio.h>
/**
 * main - main
 * Return: 0 on successful
 */
int main(void)
{
	int x, y;

	for (x = 0; x <= 8; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if (x < y)
			{
				putchar('0' + x);
				putchar('0' + y);
			}
			if (x < y && x != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
