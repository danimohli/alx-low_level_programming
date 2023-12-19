#include "main.h"
#include <stdio.h>
/**
 * print_times_table - print 0 to 15
 * @n: arg
 * Return: void
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n > 15 || n < 0)
		return;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{

			z = x * y;
			if (z > 99 && z <= 999)
			{
				printf(", %d", z);
			}
			else if (z < 10 && y != 0)
			{
				printf(",   %d", z);
			}
			else if (z > 9 && z <= 99)
			{
				printf(",  %d", z);
			}
			else
				printf("%d", z);
		}
		printf("\n");
	}
}
