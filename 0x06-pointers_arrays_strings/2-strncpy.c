#include "main.h"
/**
  *_strncpy - copies a string
  *@dest: - char type
  *@src: - char type
  *@n: - count int type
  *Return: - returns copies
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (j < n && src[i] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
