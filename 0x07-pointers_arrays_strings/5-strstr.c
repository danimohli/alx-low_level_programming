/**
 * _strstr - find the first occurence of the substring
 * @haystack: strng
 * @needle: the substring
 * Return: located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
