#include <stdio.h>
/**
 * main - main function
 *
 * printing sum of multiple of 3 & 5 below 1024
 * Return: 0 on successful
 */
int main(void)
{
	int x = 3, sum = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
			sum += x;
		x++;
	}
	printf("%d\n", sum);
	return (0);
}
