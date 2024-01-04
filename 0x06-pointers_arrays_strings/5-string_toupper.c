#include <string.h>
/**
 * string_toupper - change all letters to upper case
 * @str: string to convert
 * Return: str
 */
char *string_toupper(char *str)
{
	int length = strlen(str), i;

	for (i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return (str);
}
