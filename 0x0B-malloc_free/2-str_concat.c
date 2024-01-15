#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenation of string
 * @s1: string 1
 * @s2: string 2
 * Return: s1 + s2
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int x, y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = strlen(s1);
	y = strlen(s2);

	ptr = malloc(sizeof(char) * (x + y + 1));

	if (ptr == NULL)
		return (NULL);

	for (z = 0; z < x; z++)
		ptr[z] = s1[z];

	for (x = 0; x < y; x++)
	{
		ptr[z] = s2[x];
		z++;
	}
	ptr[z] = '\0';
	return (ptr);
}
