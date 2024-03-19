/**
 * _atoi - convert string num char number
 * @s: point to string
 * Return: convert number
 */
int _atoi(char *s)
{
	int one = 1, num = 0;

	while (*s != '\0')
	{
		if (*s == '-' && one > 0)
			one = -1;
		else if (*s == '-' && one < 0)
			one = 1;

		if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');

		if ((*s >= '0' && *s <= '9') && !(*(s + 1) >= '0' && *(s + 1) <= '9'))
			break;
		s++;
	}
	num = num * one;
	return (num);
}
