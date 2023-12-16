#include <stdio.h>
/**
 * main - main function
 * Return: 0 on successful
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = 0; y <= 8; y++)
		{
			for (z = 0; z <= 9; z++)
			{
				if (x < y && y < z)
				{
					putchar('0' + x);
					putchar('0' + y);
					putchar('0' + z);
				}

				if ((x < y && y < z) && x != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
