#include <ctype.h>
/**
 * _atoi - convert string num char number
 * @str: point to string
 * Return: convert number
 */
int _atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while (isspace(*str))
		str++;

	if (*str == '-' || *str == '+')
		sign = (*str++ == '-') ? -1 : 1;

	while (isdigit(*str))
		result = result * 10 + (*str++ - '0');
	return (sign * result);
}
