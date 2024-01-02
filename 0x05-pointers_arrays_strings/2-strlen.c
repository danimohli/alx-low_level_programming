/**
 * _strlen - count numbr of char in str
 * @s: pointer to str
 * Return: len of str
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
