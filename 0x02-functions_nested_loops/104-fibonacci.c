#include <stdio.h>
/**
 * print_fibonacci - print fibonnanci
 * Return: void function
 */
void print_fibonacci(void)
{
	long unsigned int a = 1;
	long unsigned int b = 2;
	long unsigned int temp;
	int i;

	printf("%lu, %lu, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		temp = a + b;
		printf("%lu", temp);

		if (i != 98)
			printf(", ");
		a = b;
		b = temp;
	}
	printf("\n");
}
/**
 * main - main function
 * Return: 0
 */
int main(void)
{
	print_fibonacci();
	return (0);
}
