#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, i, sum = 0;

	for (x = 1; x < argc; x++)
	{
		for (i = 0; argv[x][i] != '\0'; i++)
		{
			if (!isdigit(argv[x][i]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
