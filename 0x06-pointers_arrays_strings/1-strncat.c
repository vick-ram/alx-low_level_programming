#include "main.h"
/**
  *_strncat - concatenates two string with a limit to second string
  *@dest: - char type
  *@src: - char type
  *@n: - integer count in length
  *Return: - returns dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
