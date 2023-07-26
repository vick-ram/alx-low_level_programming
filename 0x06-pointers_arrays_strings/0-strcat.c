#include "main.h"
/**
  *_strcat - concatenates two strings
  *@dest: - char type
  *@src: - char type
  *Return: - returns dest string
  */
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	*dest = '\0';
	while (*src != '\0')
	{
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
