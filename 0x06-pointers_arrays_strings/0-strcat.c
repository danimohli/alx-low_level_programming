#include <string.h>
/**
 * _strcat - concat two strings
 * @dest: where to add the string
 * @src: string to be add
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest);

	while (*src != '\0')
	{
		dest[len] = *src;
		len += 1;
		src++;
	}
	dest[len] = '\0';
	return (dest);
}
