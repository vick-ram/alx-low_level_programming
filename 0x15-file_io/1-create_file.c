#include "main.h"
/**
  *create_file - creates a file
  *@filename: - name of a file
  *@text_content: - content
  *Return: - returns 1 (sucess)
  */
int create_file(const char *filename, char *text_content)
{
	int fd, len, res;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
		res = write(fd, text_content, len);
		if (res == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
