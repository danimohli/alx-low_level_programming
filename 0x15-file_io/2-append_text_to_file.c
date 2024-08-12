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
	ssize_t w;
	size_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	len = strlen(text_content);
	w = write(fd, text_content, len);

	if (w == -1 || (size_t)w != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
