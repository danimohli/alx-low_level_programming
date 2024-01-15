#include <stdlib.h>
#include <string.h>
/**
 * _strdup - string duplicate
 * @str: string to dup
 * Return: new pointer to new memory
 */
char *_strdup(char *str)
{
	int len = strlen(str), lop;
	char *ptr;

	ptr = malloc(sizeof(char) * len);
	if (ptr == NULL)
		return (NULL);

	for (lop = 0; str[lop] != '\0'; lop++)
		ptr[lop] = str[lop];
	ptr[lop] = '\0';

	return (ptr);
}
