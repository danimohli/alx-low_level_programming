#include <string.h>
/**
 * _strncat - similar to strcat but on use nth
 * @dest: where to copy to
 * @src: copy from
 * @n: the nth
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), x = 0;

	for (x = 0; x < n && *src != '\0'; x++)
	{
		dest[len] = *src;
		src++;
		len++;
	}
	return (dest);
}
