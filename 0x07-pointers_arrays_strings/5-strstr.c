#include "main.h"
/**
  *_strstr - locates a substring
  *@haystack: - char type param
  *@needle: - char type param
  *Return: - returns a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;
	char *nul = NULL;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack)
	{
		while (*n && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (nul);
}
