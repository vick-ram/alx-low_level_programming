#include "main.h"
/**
  *_strstr - locates a substring
  *@haystack: - char type param
  *@needle: - char type param
  *Return: - returns a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
