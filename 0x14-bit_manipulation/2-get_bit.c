/**
 * get_bit - value of bit given
 * @n: value int
 * @index: index of n
 * Return: -1 / index value found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	if ((n & mask) != 0)
		return (1);
	else
		return (0);
}
