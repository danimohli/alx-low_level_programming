#include <stdio.h>
#include <string.h>

/**
 * add_strings - Adds two large numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 * @result: The result string to store the sum.
 *
 * Return: A pointer to the result string.
 */
char *add_strings(char *num1, char *num2, char *result)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int carry = 0, i, j, k = 0;
	int max_len = len1 > len2 ? len1 : len2;

	result[max_len + 1] = '\0';

	for (i = len1 - 1, j = len2 - 1, k = max_len; k >= 0; i--, j--, k--)
	{
		int digit1 = i >= 0 ? num1[i] - '0' : 0;
		int digit2 = j >= 0 ? num2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		result[k] = (sum % 10) + '0';
		carry = sum / 10;
	}

	if (result[0] == '0')
		memmove(result, result + 1, max_len);
	return (result);
}

/**
 * print_fibonacci - Prints the first n Fibonacci numbers.
 * @n: The number of Fibonacci numbers to print.
 */
void print_fibonacci(int n)
{
	char fib1[200] = "1";
	char fib2[200] = "2";
	char result[200];
	int i;

	printf("%s, %s", fib1, fib2);

	for (i = 3; i <= n; i++)
	{
		add_strings(fib1, fib2, result);
		printf(", %s", result);
		strcpy(fib1, fib2);
		strcpy(fib2, result);
	}
	printf("\n");
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	print_fibonacci(98);
	return (0);
}
