#include <string.h>
/**
 * _strncpy - similar to strcpy but use nth
 * @dest: destination to copy to
 * @src: where to copy from
 * @n: the nth to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x, len = strlen(src);

	for (x = 0; x < n && *src != '\0'; x++)
	{
		dest[x] = *src;
		src++;
	}
	if (n > len)
		dest[x] = '\0';
	return (dest);
}
