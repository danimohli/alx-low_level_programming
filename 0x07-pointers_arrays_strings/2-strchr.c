/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to search
 * Return: pointer from the first found c
 */
char *_strchr(char *s, char c)
{
	char *str = s;

	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		str += 1;
	}
	return ('\0');
}
