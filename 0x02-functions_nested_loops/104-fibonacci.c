#include <stdio.h>
/**
 * print_fibonacci - print fibonnanci
 * Return: void function
 */
void print_fibonacci(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int temp;
	int i;

	printf("%u, %u, ", a, b);

	for (i = 3; i <= 98; i++)
	{
		temp = a + b;
		printf("%u", temp);

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
