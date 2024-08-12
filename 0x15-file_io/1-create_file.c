#include "main.h"
/**
 * create_file - create a new file
 * @filename: new file to create
 * @text_content: content to add
 * Return: total byte of content
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t w;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1 || (size_t) w != len)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
