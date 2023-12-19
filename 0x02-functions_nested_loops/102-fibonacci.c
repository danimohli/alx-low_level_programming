#include <stdio.h>
/**
 * main - main function
 *
 * write for fibonacci of first fifty
 * Return: 0 on successful
 */
int main(void)
{
	int i = 1;
	unsigned long int j = 0, k = 0, l = 1;

	while (i <= 50)
	{
		if (i == 2)
			j = j + i;
		if (i == 1 || i == 2)
			printf("%d, ", i);
		else
		{
			k = j + l;
			if (i != 50)
				printf("%ld, ", k);
			else
				printf("%ld\n", k);
			l = j;
			j = k;
		}
		i++;
	}
	return (0);
}
