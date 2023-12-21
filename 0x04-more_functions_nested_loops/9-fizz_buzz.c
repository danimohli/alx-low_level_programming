#include <stdio.h>
/**
 * main - starting point for other function
 * Return: 0 on successful
 */
int main(void)
{
	int n;

	for (n = 3; n <= 100; n++)
	{
		if (n % 3 == 0 && n % 5 == 0)
			printf("FizzBuzz ");
		else if (n % 3 == 0)
			printf("Fizz ");
		else if (n % 5 == 0)
			printf("Buzz ");
		else
		{
			if (n < 100)
				printf("%d ", n);
			else
				printf("%d\n", n);
		}
	}
	return (0);
}
