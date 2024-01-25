#include <stdarg.h>
/**
 * sum_them_all - sum all function
 * @n: num of element
 * Return: sum of n
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, sum = 0, y;
	va_list args;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		y = va_arg(args, int);
		sum += y;
	}
	return (sum);
}
