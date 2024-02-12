#include "main.h"
/**
 * append_text_to_file - a function that appends
 * at the end of a text file
 * @filename: name of the file
 * @text_content: content to be appended
 * Return: 1 on success and -1 on no success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t bytes_written;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (fd >= 0 && text_content == NULL)
		return (1);
	bytes_written = write(fd, text_content, strlen(text_content));
	if (filename == NULL || ((int)bytes_written < (int)strlen(text_content)))
		return (-1);
	return (1);
}
