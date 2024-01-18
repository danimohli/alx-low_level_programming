#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - like strncat
 * @s1: to
 * @s2: n from
 * Return: s1 with ns2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int x, y, z, a;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = strlen(s1);
	y = strlen(s2);

	if (n < y)
		y = n;

	ptr = malloc(sizeof(char) * (1 + x + y));

	if (ptr == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		ptr[z] = s1[z];
	for(a = 0; a < y; a++)
	{
		ptr[x] = s2[a];
		x++;
	}
	return (ptr);
}
