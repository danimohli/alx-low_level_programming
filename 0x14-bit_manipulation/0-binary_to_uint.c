#include <stdlib.h>
/**
 * binary_to_uint - takes binary to int
 * @b:  pointer to strings of 0s and 1s
 * Return: convert int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int x = 0;

	if (b == NULL)
		return (0);

	while (b[x] != '\0')
	{
		if (b[x] == '0')
			res = res << 1;
		else if (b[x] == '1')
			res = (res << 1) | 1;
		else
			return (0);
		x++;
	}
	return (res);
}
