/**
 * factorial - factorial function
 * @n: interger to find
 * Return: -1/0/factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
