/**
 * hash_djb2 - hashing algorithm created by Daniel J. Bernstein
 * @str: string converting to hash
 * Return: hash string
 */
unsigned long hash_djb2(const unsigned char *str)
{
	int x;
	unsigned long hah = 5381;

	while ((x = *str++))
	{
		hah = ((hah << 5) + hah) + c; /* hash * 33 + x */
	}
	return (hah);
}
