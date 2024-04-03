#include <stdlib.h>
#include <string.h>
/**
 * argstostr - argstostr string
 * @ac: same as argc(argument count)
 * @av: same as argv(argument vector)
 * Return: av
 */
char *argstostr(int ac, char **av)
{
	int i, totalLength, currentPosition;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	totalLength = 0;
	for (i = 0; i < ac; ++i)
		totalLength += strlen(av[i]) + 1;

	result = (char *)malloc(totalLength * sizeof(char));

	if (result == NULL)
		return (NULL);

	currentPosition = 0;
	for (i = 0; i < ac; ++i)
	{
		strcpy(result + currentPosition, av[i]);
		currentPosition += strlen(av[i]);
		result[currentPosition + 1] = '\n';
	}
	result[currentPosition + 1] = '\0';
	return (result);
}
