#include <ctype.h>
/**
 * cap_string - cap every word in a string
 * @str: words of strings
 * Return: str
 */
char *cap_string(char *str)
{
	int cap_next = 1, i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (isspace(str[i]) || ispunct(str[i]))
		{
			cap_next = 1;
		}
		else if (cap_next)
		{
			str[i] = toupper(str[i]);
			cap_next = 0;
		}
	}
	return (str);
}
