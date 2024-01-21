#include <stdio.h>
/**
 * print_fibonacci - print fibonnanci
 * Return: void function
 */
void print_fibonacci(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int temp;
	int i;

	printf("1, 2");

	for (i = 3; i <= 98; i++)
	{
		temp = a + b;
		printf(", %lu", temp);

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
