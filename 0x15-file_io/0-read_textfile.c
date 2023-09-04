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
	ssize_t res_read, res_write;

	if (filename == NULL)
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
	res_read = read(fd, buffer, letters);
	if (res_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	res_write = write(STDOUT_FILENO, buffer, res_read);
	if (res_write == -1 || res_write != res_read)
	{
		free(buffer);
		close(fd);
		return (0):
	}
	free(buffer);
	close(fd);
	return (res_write);
}
