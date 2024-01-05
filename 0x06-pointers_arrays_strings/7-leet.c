/**
 * leet - change character with number
 * @str: str to change char from
 * Return: str
 */
char *leet(char *str)
{
	int dx = 0, nd;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[dx])
	{
		for (nd = 0; nd <= 7; nd++)
		{
			if (str[dx] == leet[nd] ||
			    str[dx] - 32 == leet[nd])
				str[dx] = nd + '0';
		}

		dx++;
	}

	return (str);
}
