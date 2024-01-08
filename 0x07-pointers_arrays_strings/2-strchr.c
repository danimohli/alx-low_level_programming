#include <unistd.h>
/**
 * _strchr - locate a character in a string
 * @s: string to search
 * @c: character to search
 * Return: pointer from the first found c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
