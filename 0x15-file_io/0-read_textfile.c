#include "main.h"
/**
  *reads a text file and prints to the POSIX
  *standard output
  *@filename: - the name of the file
  *@letters: - the letters to be printed
  *Return: - returns number of letters
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(fd);
	free(buffer);
	return (bytes_written);
}
