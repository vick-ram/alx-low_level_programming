#include "main.h"
/**
  *_strcpy - copies a string
  *@dest: - pointer to a char type
  *@src: - pointer to a char type
  *Return: - returns a string value
  */
char *_strcpy(char *dest, char *src)
{
	char *result = dest;

	if (dest == src)
	{
		return (dest);
	}
	while ((*dest = *src) != '\0')
	{
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
