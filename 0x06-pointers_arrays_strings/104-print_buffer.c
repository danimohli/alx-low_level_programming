#include <stdio.h>
/**
 * print_buffer - print content of buffer
 * @b: pointer to buffer to print
 * @size: buffer size to print
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int x, y = 0;

	if (size <= 0)
		printf("\n");
	for (x = 0; x < size; x++)
	{
		if (x < size)
		{
			if (x % 10 == 0)
				printf("%08x: ", x);
			printf("%02x", b[x]);
			if (x % 2 == 1)
				printf(" ");
			if ((x + 1) % 10 == 0)
			{
				for (; y < x + 1; y++)
				{
					if (b[y] >= 32 && b[y] <= 126)
						printf("%c", b[y]);
					else
						printf(".");
				}
			}
		}
		if ((x + 1) % 10 == 0 || (x + 1) == size)
			printf("\n");
	}
}
