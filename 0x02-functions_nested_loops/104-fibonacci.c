#include <stdio.h>
/**
 * main - main function for other
 * Return: 0
 */
int main(void)
{
	unsigned int fib1 = 1;
	unsigned int fib2 = 2;
	int i;
	printf("%u, %u", fib1, fib2);
	
	for (i = 2; i < 98; i++)
	{
		unsigned int next = fib1 + fib2;
		printf(", %u", next);
		
		fib1 = fib2;
		fib2 = next;
	}
	printf("\n");
	return (0);
}
