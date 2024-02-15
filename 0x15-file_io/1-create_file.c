#include "main.h"
/**
 * create_file - create a new file
 * @filename: new file to create
 * @text_content: content to add
 * Return: total byte of content
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t writebyte, size = strlen(text_content);
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		writebyte = write(fd, text_content, strlen(text_content));
		if (writebyte == -1)
		{
			close(fd);
			return (-1);
		}

		if (writebyte != size)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
