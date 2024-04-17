
/**
 * rot13 - rot13  encryption
 * @s: str to rot13
 * Return: s==rot13
 */
char *rot13(char *s)
{
	int x, y;
	char str[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; str[y] != '\0'; y++)
		{
			if (str[y] == s[x])
			{
				s[x] = n13[y];
				break;
			}
		}
	}
	return (s);
}
