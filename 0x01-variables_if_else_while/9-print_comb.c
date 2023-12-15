#include <stdio.h>
/**
 * main - main function
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
