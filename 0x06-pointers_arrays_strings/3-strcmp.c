/**
 * _strcmp - compare strings
 * @s1: first string to compare
 * @s2: second string to compare with s1
 * Return: s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s2++;
			s1++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}
