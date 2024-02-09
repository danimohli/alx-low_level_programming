#include <stdio.h>
/**
 * print_binary - convert interger to binary
 * @n: interger to convert
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int lead_num = 1;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			lead_num = 0;
			putchar('1');
		}
		else if (!lead_num)
			putchar('0');
		mask >>= 1;
	}
	if (lead_num)
		putchar('0');
}
