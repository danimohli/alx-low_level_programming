/**
 * _memcpy - copy memory
 * @dest: destination to copy to
 * @src: srcour where to copy from
 * @n: nth
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		*dest = src[x];
		x++;
		dest++;
	}
	return (dest);
}
