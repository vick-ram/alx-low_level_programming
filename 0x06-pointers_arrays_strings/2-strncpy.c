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
	int i;

	for (i = 0; i < n - 1 && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
