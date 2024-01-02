
/**
 * rev_string - reverse string
 * @s: pointer to string
 * Return: void function
 */
void rev_string(char *s)
{
	int x, y;
	char rev;

	for (x = 0; s[x] != '\0'; x++)
	{

	}
	for (y = 0; y < x; y++)
	{
		x--;
		rev = s[y];
		s[y] = s[x];
		s[x] = rev;
	}
}
