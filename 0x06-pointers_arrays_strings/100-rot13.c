
/**
 * rot13 - rot13  encryption
 * @s: str to rot13
 * Return: s==rot13
 */
char *rot13(char *s)
{
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int x = 0;

	while (*s != '\0')
	{
		while (str[x] != '\0')
		{
			if (str[x] == *s)
			{
				*s = n13[x];
				break;
			}
			x += 1;
		}
		s += 1;
	}
	return (s);
}
