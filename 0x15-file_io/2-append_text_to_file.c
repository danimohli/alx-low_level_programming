#include "main.h"
/**
 * append_text_to_file - append text to already exitin filecreated
 * @filename: name of to edit
 * @text_content: content
 * Return: len content
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writebyte;

	if (filename == NULL || text_content == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	writebyte = write(fd, text_content, strlen(text_content));
	if (writebyte == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
