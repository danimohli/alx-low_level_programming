#include <stdio.h>
/**
 * main - main function
 *
 * Finding fabonancci not passing 4M
 * Return: 0 on successful
 */
int main(void)
{
	int previousNum = 1, nextNum;
	int currentNum = 2;
	int sumEven = 0;

	while (currentNum <= 4000000)
	{
		if (currentNum % 2 == 0)
		{
			sumEven += currentNum;
		}

		nextNum = previousNum + currentNum;
		previousNum = currentNum;
		currentNum = nextNum;
	}
	printf("%d\n", sumEven);
	return (0);
}
