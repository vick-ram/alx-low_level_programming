#include <stdlib.h>
#include "main.h"
/**
  *string_nconcat - concatenates two strings and saves in memory
  *@s1: - char type param
  *@s2: - char type param
  *Return: - returns pointer to concatenated string momory
  *returns NULL if fails, 
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *result;

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	result = malloc(sizeof(char) * (len1 + len2 + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j <= n; j++)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
