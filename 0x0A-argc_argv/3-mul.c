#include <stdio.h>
#include <stdlib.h>
/**
 * main - starting function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 0r 1
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
