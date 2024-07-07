#include <string.h>
/**
 * infinite_add - add number to buffer
 * @n1: number to add one
 * @n2: number to add two
 * @r: buffer
 * @size_r: size of buffer
 * Return: buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int max_len = (len1 > len2 ? len1 : len2) + 1;
	int digit1;
	int digit2;
	int carry;
	int i, j, k, sum;


	if (size_r <= max_len)
		return (0);

	carry = 0;
	sum = 0;
	i = len1 - 1;
	j = len2 - 1;
	k = max_len;
	r[k--] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		digit1 = (i >= 0) ? n1[i--] - '0' : 0;
		digit2 = (j >= 0) ? n2[j--] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[k--] = (sum % 10) + '0';
	}

	if (k < 0)
		return (r);
	return (r + k + 1);
}
