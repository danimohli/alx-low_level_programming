#include <stdio.h>
/**
 * print_diagsums - take nums diagonally and sum
 * @a: array of int
 * @size: size of array
 * Return: void function
 */
void print_diagsums(int *a, int size)
{
	int diag1_sum = 0, diag2_sum = 0, i;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
		diag2_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diag1_sum, diag2_sum);
}
