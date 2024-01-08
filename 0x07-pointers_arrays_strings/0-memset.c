/**
 * _memset - set memory with constant character
 * @s: memery set
 * @b: constant character
 * @n: nth of memory space
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (i < n)
	{
		s[x] = b;
		x++;
	}
	return (s);
}
