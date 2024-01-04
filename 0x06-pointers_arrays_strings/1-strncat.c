#include <string.h>
/**
 * _strncat - similar to strcat but on use nth
 * @dest: where to copy to
 * @src: copy from
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), x = 0;

	while (*src != '\0' && x < n)
	{
		dest[len] = src[x];
		x++;
		src++;
		len++;
	}
	return (dest);
}
