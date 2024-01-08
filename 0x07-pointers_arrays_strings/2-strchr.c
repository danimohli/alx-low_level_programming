/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to search
 * Return: pointer from the first found c
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
