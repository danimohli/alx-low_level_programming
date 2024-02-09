/**
 * flip_bits - flip
 * @n: value to flip
 * @m: oo
 * Return: 0 /1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int x = 0;

	while (res > 0)
	{
		if (res & 1)
		{
			x++;
		}
		res >>= 1;
	}
	return (x);
}
