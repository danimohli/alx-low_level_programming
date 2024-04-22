#include "3-calc.h"
/**
 * op_add - addition function
 * @b: arg b
 * @a: arg a
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction function
 * @a: arg a
 * @b: arg b
 * Return: a -b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication function
 * @a: argument a
 * @b: argument b
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divition function
 * @a: argument A
 * @b: argument B
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulos function
 * @a: argument a
 * @b: argument b
 * Return: a % b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
