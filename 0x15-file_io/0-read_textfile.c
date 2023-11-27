#include "main.h"
/**
  *read_textfile - reads a text file and prints to the POSIX
  *standard output
  *@filename: - the name of the file
  *@letters: - the letters to be printed
  *Return: - returns number of letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_write, bytes_total;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_write = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_write == -1 || bytes_write != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_total = bytes_read;
	free(buffer);
	close(fd);
	return (bytes_total);
}
