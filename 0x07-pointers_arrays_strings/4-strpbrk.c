/**
 * _strpbrk - locates the first occurrence in the string
 * @s: string
 * @accept: word to search
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
