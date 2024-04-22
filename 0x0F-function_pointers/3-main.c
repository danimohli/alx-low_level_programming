#include "3-calc.h"
/**
 * main - maint function
 * @argc: num of arg supplied
 * @argv: array of pointer to arguent supply
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int a, b, result, (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operator = get_op_func(argv[2]);

	if (operator == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = operator(a, b);
	printf("%d\n", result);

	return (0);
}
