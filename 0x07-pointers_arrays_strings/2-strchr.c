/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to search
 * Return: pointer from the first found c
 */
char *_strchr(char *s, char c)
{
	int x = 0;

	while (s[x])
	{
		if (s[x] == c)
			return (s + x);
		x++;
	}
	return ('\0');
}
