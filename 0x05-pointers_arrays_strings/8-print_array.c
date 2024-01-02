#include "main.h"
#include <stdio.h>
/**
 * print_array - array function
 * @a: array name
 * @b: ize of array
 * Return: void function
 */
void print_array(int *a, int b)
{
	int c;

	if (b <= 0)
	{
		printf("\n");
	}

	for (c = 0; c <= b - 1; c++)
	{
		if (c == b - 1)
			printf("%d\n", a[c]);
		else
			printf("%d, ", a[c]);
	}
}
