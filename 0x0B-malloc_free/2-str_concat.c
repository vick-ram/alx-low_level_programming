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
	int len1 = 0, len2 = 0;
	int i = 0, j = 0;
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
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		mem[i + j] = s2[j];
		j++;
	}
	mem[i + j] = '\0';
	return (mem);
}
