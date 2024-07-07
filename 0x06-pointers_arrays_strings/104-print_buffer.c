#include <stdio.h>
/**
 * print_buffer - print content of buffer
 * @b: pointer to buffer to print
 * @size: buffer size to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int x, y;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (x = 0; x < size; x += 10)
	{
		printf("%08x: ", x);
		for (y = 0; y < 10; y++)
		{
			if (x + y < size)
				printf("%02x", b[x + y]);
			else
				printf("  ");
			if (y % 2 == 1)
				printf(" ");
		}
		for (y = 0; y < 10; y++)
		{
			if (x + y < size)
			{
				if (b[x + y] >= 32 && b[x + y] <= 126)
					printf("%c", b[x + y]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
