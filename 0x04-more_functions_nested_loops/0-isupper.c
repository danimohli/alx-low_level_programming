/**
 * _isupper - Checking for upper case
 * @c: case to verify
 * Return: 0/1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
