#include "main.h"
/**
 * print_error - error function
 * @message: error message
 * @filename: file about exiting from
 * @code: exit code
 */
void print_error(const char *message, const char *filename, int code)
{
	write(2, message, strlen(message));
	if (filename)
		write(2, filename, strlen(filename));
	write(2, "\n", 1);
	exit(code);
}

/**
 * close_file - close file error function
 * @fd: file descriptor
 * @exit_code: exit code
 */
void close_file(int fd, int exit_code)
{
	if (close(fd) == -1)
	{
		write(2, "Error: Can't close fd ", 23);
		dprintf(2, "%d\n", fd);
		exit(exit_code);
	}
}

/**
 * copy_content - copy successful open file
 * @op_fr: open fd to copy from
 * @op_to: open fd to copied to
 * @file_from: content to copy from fd op_fr
 */
void copy_content(int op_fr, int op_to, const char *file_from)
{
	char *buf = malloc(1024);
	ssize_t rd_fr;

	if (!buf)
		print_error("Error: Can't allocate buffer", NULL, 98);

	while ((rd_fr = read(op_fr, buf, 1024)) > 0)
	{
		if (write(op_to, buf, rd_fr) == -1)
		{
			free(buf);
			print_error("Error: Can't write to ", file_from, 99);
		}
	}
	if (rd_fr == -1)
	{
		free(buf);
		print_error("Error: Can't read from file ", file_from, 98);
	}
	free(buf);
}


/**
 * cp - copy function
 * @file_from: file coping from
 * @file_to: file copied to
 * Return: 0 on success and other code on failure
 */
int cp(const char *file_from, const char *file_to)
{
	int op_fr = open(file_from, O_RDONLY);
	int op_to = open(file_to, O_TRUNC | O_WRONLY | O_CREAT, 0664);

	if (op_fr == -1)
		print_error("Error: Can't read from file ", file_from, 98);
	if (op_to == -1)
	{
		close_file(op_fr, 100);
		print_error("Error: Can't write to ", file_to, 99);
	}

	copy_content(op_fr, op_to, file_from);

	close_file(op_fr, 100);
	close_file(op_to, 100);

	return (0);
}

/**
 * main - Main or starting function
 * @argc: argument supply count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error("Usage: cp file_from file_to", NULL, 97);

	return (cp(argv[1], argv[2]));
}
