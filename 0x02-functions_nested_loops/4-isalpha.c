/**
 * _isalpha - checking for alpha
 * @c: argument to chech
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
