#include "main.h"
/**
  *_strchr - locates character in a string
  *@s: - char type
  *@c: - char type param
  *Return: - returns pointer to the first occurrence
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return ((char *)0);
}
