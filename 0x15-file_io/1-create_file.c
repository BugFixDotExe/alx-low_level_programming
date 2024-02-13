#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file
 * @text_content: the content to be written
 * Return: 1 on successs or  -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written;

	umask(000);
	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, S_IRWXU);
	umask(S_IRWXU);
	if (fd == -1)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT, S_IRWXU);
		if (fd == -1)
			return (-1);
		return (1);
	}
	else
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written < strlen(text_content))
			return (-1);
		close(fd);
	}
	return (1);

}
