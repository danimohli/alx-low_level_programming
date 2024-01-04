#include <ctype.h>
/**
 * cap_string - cap every word in a string
 * @str: words of strings
 * Return: str
 */
char *cap_string(char *str)
{
	int x = 0;

	while (str[x])
	{
		while (!(str[x] >= 'a' && str[x] <= 'z'))
			x++;

		if (str[x - 1] == ' ' ||
		    str[x - 1] == '\t' ||
		    str[x - 1] == '\n' ||
		    str[x - 1] == ',' ||
		    str[x - 1] == ';' ||
		    str[x - 1] == '.' ||
		    str[x - 1] == '!' ||
		    str[x - 1] == '?' ||
		    str[x - 1] == '"' ||
		    str[x - 1] == '(' ||
		    str[x - 1] == ')' ||
		    str[x - 1] == '{' ||
		    str[x - 1] == '}' ||
		    x == 0)
			str[x] -= 32;

		x += 1;
	}

	return (str);
}
