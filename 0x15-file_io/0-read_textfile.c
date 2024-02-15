#include "main.h"
/**
 * read_textfile - create a file and read into it.
 * @filename: file name to create and to read to
 * @letters: number of byte to read
 * Return: number of byte read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	int fd;
	ssize_t readbyte, writebyte;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	ptr = malloc(letters + 1);
	if (ptr == NULL)
	{
		close(fd);
		return (0);
	}
	readbyte = read(fd, ptr, letters);
	if (readbyte == -1)
	{
		free(ptr);
		close(fd);
		return (0);
	}
	writebyte = write(STDOUT_FILENO, ptr, readbyte);
	if (writebyte == -1 || writebyte != readbyte)
	{
		free(ptr);
		close(fd);
		return (0);
	}
	free(ptr);
	close(fd);
	return (readbyte);
}
