/**
 * set_bit - set bit of given value
 * @n: value
 * @index: index
 * Return: setbit
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;
	*n = *n | mask;

	return (1);
}
