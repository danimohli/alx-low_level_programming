#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * argstostr - argstostr string
 * @ac: same as argc(argument count)
 * @av: same as argv(argument vector)
 * Return: av
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int size = 0, lop, ins = 0;
	int x, y;

	if (ac == 0 or av == NULL)
		return (NULL);

	for (lop = 0; lop < ac; lop++)
		size += strlen(av[lop]) + 1;

	ptr = (char *)malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
		{
			ptr[ins++] = av[x][y];
		}
		ptr[ins++] = '\n';
	}
	ptr[ins] = '\0';
	return (ptr);
}
