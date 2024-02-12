#include "main.h"
/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the path to the text file
 * @letters: the text to tbe read
 * Return: number of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t bytes_read, bytes_written;
	int fd;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written < bytes_read)
		return (0);
	close(fd);
	free(buffer);
	return (bytes_read);
}
