#include <stdio.h>
/**
 * print_fibonacci - print fibonnanci
 * Return: void function
 */
void print_fibonacci(void)
{
	unsigned long long int a = 1;
	unsigned long long int b = 2;
	unsigned long long int temp;
	int i;

	printf("1, 2");

	for (i = 3; i <= 98; i++)
	{
		temp = a + b;
		printf(", %llu", temp);

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
