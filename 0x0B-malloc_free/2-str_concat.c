#include "main.h"
#include <stdlib.h>
/**
  *str_concat - concatenates two strings and allocates memory
  *@s1: - char type param
  *@s2: - char type param
  *Return: - returns pointer to memory of concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, i, j;
	char *mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	mem = (char *)malloc(len1 + len2 + 1);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		mem[i] = s1[i];
	}
	for (j = 0; i <= len2; j++)
	{
		mem[i + j] = s2[j];
	}
	mem[len1 + len2] = '\0';
	return (mem);
}
