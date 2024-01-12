#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 / 1
 */
int main(int argc, char *argv[])
{
	int   minCoins, numCoins, cents;
	int coins[] = {25, 10, 5, 2, 1}, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = sizeof(coins) / sizeof(coins[0]);

	minCoins = 0;
	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			minCoins++;
		}
	}

	printf("%d\n", minCoins);

	return (0);
}
