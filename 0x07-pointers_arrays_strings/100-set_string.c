/**
 * set_string - set string of (*to) to s
 * @to: argument
 * @s: argument
 */
void set_string(char **s, char *to)
{
	*s = to;
	to = *s;
}
