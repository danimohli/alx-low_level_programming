/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to search
 * Return: pointer from the first found c
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (s + x);
	}
	return ('\0');
}
/**
 * _strspn - how many samme letter found in each other
 * @s: string to search
 * @accept: used to compare string
 * Return: number of cha found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count  = 0;

	while (*s && _strchr(accept, *s))
	{
		count++;
		s++;
	}
	return (count);
}
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
