#include "main.h"
/**
  *append_text_to_file - appends a text at the end
  *@filename: - name of a file
  *@text_content: - content
  *Return: - returns 1 (success)
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, res;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
